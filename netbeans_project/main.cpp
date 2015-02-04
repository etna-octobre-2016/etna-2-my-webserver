/* 
 * File:   main.cpp
 * Author: ahemt_s
 *
 * Created on 2 février 2015, 22:38
 */

#include <cstdlib>
#include <iostream>

#include <mysql_connection.h>

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

#include "mysql_driver.h"

using namespace std;

int main(void)
{
    cout << endl;
    cout << "Running 'SELECT * FROM users'" << endl;

    try
    {
      sql::Driver       *driver;
      sql::Connection   *con;
      sql::Statement    *stmt;
      sql::ResultSet    *res;

      /* Create a connection */
      driver = sql::mysql::get_driver_instance();
      con = driver->connect("tcp://127.0.0.1:3306", "root", "root");
      
      /* Connect to the MySQL test database */
      con->setSchema("test-cpp");

      stmt = con->createStatement();
      res = stmt->executeQuery("SELECT * FROM users");
      
      while (res->next())
      {
        cout << "\t... MySQL replies: ";
        
        /* Access column data by alias or column name */
        cout << res->getString("name") << endl;
        cout << "\t... MySQL says it again: ";
        
        /* Access column fata by numeric offset, 1 is the first column */
        cout << res->getString(1) << endl;
      }
      delete res;
      delete stmt;
      delete con;
    }
    catch (sql::SQLException &e)
    {
      cout << "# ERR: SQLException in " << __FILE__;
      cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << endl;
      cout << "# ERR: " << e.what();
      cout << " (MySQL error code: " << e.getErrorCode();
      cout << ", SQLState: " << e.getSQLState() << " )" << endl;
    }
    cout << endl;
    return EXIT_SUCCESS;
}

