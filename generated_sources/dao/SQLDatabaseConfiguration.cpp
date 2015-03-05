#include "SQLDatabaseConfiguration.h"

SQLDatabaseConfiguration::SQLDatabaseConfiguration() {
	// TODO - implement SQLDatabaseConfiguration::SQLDatabaseConfiguration
	throw "Not yet implemented";
}

string SQLDatabaseConfiguration::getEngine() {
	return this->engine;
}

string SQLDatabaseConfiguration::getName() {
	return this->name;
}

string SQLDatabaseConfiguration::getHost() {
	return this->host;
}

int SQLDatabaseConfiguration::getPort() {
	return this->port;
}

string SQLDatabaseConfiguration::getUsername() {
	return this->username;
}

string SQLDatabaseConfiguration::getPassword() {
	return this->password;
}

void SQLDatabaseConfiguration::setEngine(string engine) {
	this->engine = engine;
}

void SQLDatabaseConfiguration::setName(string name) {
	this->name = name;
}

void SQLDatabaseConfiguration::setHost(string host) {
	this->host = host;
}

void SQLDatabaseConfiguration::setPort(int port) {
	this->port = port;
}

void SQLDatabaseConfiguration::setUsername(string username) {
	this->username = username;
}

void SQLDatabaseConfiguration::setPassword(string password) {
	this->password = password;
}

void SQLDatabaseConfiguration::parseConfigurationFile(string filepath) {
	// TODO - implement SQLDatabaseConfiguration::parseConfigurationFile
	throw "Not yet implemented";
}
