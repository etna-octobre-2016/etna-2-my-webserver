class UsersRepository {


public:
	static std::list<User> fetchAll();

	static int add(User user);

	static int update(User user);

	static int remove(User user);
};
