class DatabaseRow {

private:
	std::list<DatabaseField> fields;

public:
	DatabaseField getField(string name);

	void addField(DatabaseField field);
};
