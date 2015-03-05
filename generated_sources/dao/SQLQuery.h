class SQLQuery {

private:
	string type;
	std::list<DatabaseField> fields;
	string table;
	std::list<string> conditions;

public:
	SQLQuery();

private:
	void ~SQLQuery();

public:
	SQLQuery select(std::list<DatabaseField> fields);

	SQLQuery insert();

	SQLQuery update(string table);

	SQLQuery Delete();

	SQLQuery from(string table);

	SQLQuery into(string table);

	SQLQuery set(std::list<DatabaseField> fields);

	SQLQuery where(std::list<string> conditions);
};
