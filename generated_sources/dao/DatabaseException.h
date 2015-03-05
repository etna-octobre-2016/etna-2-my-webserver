class DatabaseException {

private:
	string message;

public:
	DatabaseException(string message);

	string getMessage();
};
