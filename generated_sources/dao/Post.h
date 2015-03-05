class Post : IEntity {

private:
	int id;
	User author;
	string message;
	string creationDate;

public:
	int getId();

	User getAuthor();

	string getMessage();

	string getCreationDate();

	void setId(int id);

	void setAuthor(User author);

	void setMessage(string message);

	void setCreationDate(string creationDate);

	DatabaseRow toDatabaseRow();
};
