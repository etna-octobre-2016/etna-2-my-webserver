class MySQLDatabase : ISQLDatabase {

private:
	MYSQL* connection;
	SQLQuery* lastExecutedQuery;
	SQLDatabaseConfiguration* configuration;

private:
	MySQLDatabase(SQLDatabaseConfiguration configuration);

	void ~MySQLDatabase();

public:
	void executeQuery(SQLQuery query);

	DatabaseRow fetchRow();

	int getAffectedRowsCount();

protected:
	void connect();

	void disconnect();
};
