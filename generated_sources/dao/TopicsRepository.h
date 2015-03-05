class TopicsRepository {


public:
	static std::list<Topic> fetchAll();

	static int add(Topic topic);

	static int update(Topic topic);

	static int remove(Topic entity);
};
