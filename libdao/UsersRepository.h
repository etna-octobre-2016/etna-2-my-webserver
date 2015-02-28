class UsersRepository : ISQLRepository {


public:
	static std::list<DatabaseRow> fetchAll();

	static int add(Entity entity);

	static int update(Entity entity);

	static int remove(Entity entity);
};
