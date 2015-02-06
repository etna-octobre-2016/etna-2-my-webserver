/* 
 * File:   main.cpp
 * Author: ahemt_s
 *
 * Created on 2 février 2015, 22:38
 */

// Dependencies
#include <cstdlib>
#include <iostream>

// MySQL includes
#include <mysql_connection.h>
#include <mysql_driver.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

void testMySQL()
{
    std::cout << std::endl;
    std::cout << "Running 'SELECT * FROM users'" << std::endl;

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
        std::cout << "\t... MySQL replies: ";
        
        /* Access column data by alias or column name */
        std::cout << res->getString("name") << std::endl;
        std::cout << "\t... MySQL says it again: ";
        
        /* Access column fata by numeric offset, 1 is the first column */
        std::cout << res->getString(1) << std::endl;
      }
      delete res;
      delete stmt;
      delete con;
    }
    catch (sql::SQLException &e)
    {
      std::cout << "# ERR: SQLException in " << __FILE__;
      std::cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
      std::cout << "# ERR: " << e.what();
      std::cout << " (MySQL error code: " << e.getErrorCode();
      std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
    }
    std::cout << std::endl;
}

void testSQLite()
{
    
}

int main(void)
{
    testMySQL();
    //testPostgreSQL();
    return 0;
}