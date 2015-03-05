#include "User.h"

int User::getId() {
	return this->id;
}

string User::getLastname() {
	return this->lastname;
}

string User::getFirstname() {
	return this->firstname;
}

int User::getAge() {
	return this->age;
}

void User::setId(int id) {
	this->id = id;
}

void User::setLastname(string lastname) {
	this->lastname = lastname;
}

void User::setFirstname(string fistname) {
	this->firstname = fistname;
}

void User::setAge(int age) {
	this->age = age;
}

DatabaseRow User::toDatabaseRow() {
	// TODO - implement User::toDatabaseRow
	throw "Not yet implemented";
}
