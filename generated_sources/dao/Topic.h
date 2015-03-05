class Topic : IEntity {

private:
	int id;
	string title;
	string creationDate;
	Post lastPost;

public:
	int getId();

	string getTitle();

	string getCreationDate();

	Post getLastPost();

	void setId(int id);

	void setTitle(string title);

	void setCreationDate(string creationDate);

	void setLastPost(Post lastPost);

	DatabaseRow toDatabaseRow();
};
