class ISQLDatabase {


public:
	virtual void executeQuery(SQLQuery query) = 0;

	virtual DatabaseRow fetchRow() = 0;

	virtual int getAffectedRowsCount() = 0;

protected:
	virtual void connect() = 0;

	virtual void disconnect() = 0;
};
