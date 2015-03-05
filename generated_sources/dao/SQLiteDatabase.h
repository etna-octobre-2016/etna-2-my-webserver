class SQLiteDatabase : ISQLDatabase {

private:
	sqlite3* connection;
	SQLQuery* lastExecutedQuery;
	SQLDatabaseConfiguration* configuration;

private:
	SQLiteDatabase(SQLDatabaseConfiguration configuration);

	void ~SQLiteDatabase();

public:
	void executeQuery(SQLQuery query);

	DatabaseRow fetchRow();

	int getAffectedRowsCount();

protected:
	void connect();

	void disconnect();
};
