class SQLQuery {

private:
	string type;
	std::list<string> fields;
	std::list<string> tables;
	std::list<string> conditions;
	std::list<string> sortCriterias;

public:
	SQLQuery();

private:
	void ~SQLQuery();

public:
	SQLQuery select(std::list<string> fields);
};
