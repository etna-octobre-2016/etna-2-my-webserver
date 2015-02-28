class SQLDatabaseFactory {

private:
	ISQLDatabase database;

public:
	static ISQLDatabase create(SQLDatabaseConfiguration configuration);

	static void destroy();
};
