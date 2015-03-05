class SQLDatabaseFactory {

private:
	ISQLDatabase database;
	SQLDatabaseConfiguration databaseConfiguration;

public:
	static ISQLDatabase create();

	static void destroy();
};
