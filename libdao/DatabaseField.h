template <DatabaseFieldType DatabaseFieldType>
class DatabaseField {

private:
	string name;
	DatabaseFieldType value;

public:
	DatabaseField(string name, DatabaseFieldType value);

	string getName();

	DatabaseFieldType getValue();
};
