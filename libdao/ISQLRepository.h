class ISQLRepository {


public:
	virtual static std::list<DatabaseRow> fetchAll() = 0;

	virtual static int add(Entity entity) = 0;

	virtual static int update(Entity entity) = 0;

	virtual static int remove(Entity entity) = 0;
};
