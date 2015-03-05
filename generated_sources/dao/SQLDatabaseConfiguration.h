class SQLDatabaseConfiguration {

private:
	string engine;
	string name;
	string host;
	int port;
	string username;
	string password;

public:
	SQLDatabaseConfiguration();

	void ~SQLDatabaseConfiguration();

	string getEngine();

	string getName();

	string getHost();

	int getPort();

	string getUsername();

	string getPassword();

	void setEngine(string engine);

	void setName(string name);

	void setHost(string host);

	void setPort(int port);

	void setUsername(string username);

	void setPassword(string password);

private:
	void parseConfigurationFile(string filepath);
};
