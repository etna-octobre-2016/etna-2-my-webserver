class User : IEntity {

private:
	int id;
	string lastname;
	string firstname;
	int age;

public:
	int getId();

	string getLastname();

	string getFirstname();

	int getAge();

	void setId(int id);

	void setLastname(string lastname);

	void setFirstname(string fistname);

	void setAge(int age);

	DatabaseRow toDatabaseRow();
};
