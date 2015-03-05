class PostsRepository {


public:
	static std::list<Post> fetchAll();

	static int add(Post post);

	static int update(Post post);

	static int remove(Post post);
};
