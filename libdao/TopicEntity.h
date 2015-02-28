class TopicEntity : Entity {

private:
	int id;
	string title;
	string creationDate;
	PostEntity lastPost;

public:
	int getId();

	string getTitle();

	string getCreationDate();

	PostEntity getLastPost();

	void setId(int id);

	void setTitle(string title);

	void setCreationDate(string creationDate);

	void setLastPost(PostEntity lastPost);
};
