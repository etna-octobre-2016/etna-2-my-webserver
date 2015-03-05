class DatabaseRow {

private:
	std::list<DatabaseField> fields;

public:
	std::list<DatabaseField> getFields();

	DatabaseField getFieldByName(string name);

	void addField(DatabaseField field);
};
