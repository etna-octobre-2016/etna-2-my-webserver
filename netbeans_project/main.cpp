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

// SQLite includes
#include <sqlite/sqlite3.h>

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
      con = driver->connect("tcp://127.0.0.1:3306", "root", "");
      
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

 static int callback(void *NotUsed, int argc, char **argv, char **azColName)
 {
    int i;
    for(i=0; i<argc; i++)
    {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
}

int testSQLite(int argc, char **argv)
{
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;

    if( argc!=3 ){
        fprintf(stderr, "Usage: %s DATABASE SQL-STATEMENT\n", argv[0]);
        return(1);
    }
    rc = sqlite3_open(argv[1], &db);

    if( rc ){
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return(1);
    }
    rc = sqlite3_exec(db, argv[2], callback, 0, &zErrMsg);
    if( rc!=SQLITE_OK ){
        fprintf(stderr, "SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
    }
    sqlite3_close(db);
    return(0);
}

int main(int argc, char **argv)
{
    //testMySQL();
    return testSQLite(argc, argv);
}