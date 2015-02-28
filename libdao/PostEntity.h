class PostEntity : Entity {

private:
	int id;
	UserEntity author;
	string message;
	string creationDate;

public:
	int getId();

	UserEntity getAuthor();

	string getMessage();

	string getCreationDate();

	void setId(int id);

	void setAuthor(UserEntity author);

	void setMessage(string message);

	void setCreationDate(string creationDate);
};
