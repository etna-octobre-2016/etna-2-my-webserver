#include "UserEntity.h"

int UserEntity::getId() {
	return this->id;
}

string UserEntity::getLastname() {
	return this->lastname;
}

string UserEntity::getFirstname() {
	return this->firstname;
}

int UserEntity::getAge() {
	return this->age;
}

void UserEntity::setId(int id) {
	this->id = id;
}

void UserEntity::setLastname(string lastname) {
	this->lastname = lastname;
}

void UserEntity::setFirstname(string fistname) {
	this->firstname = fistname;
}

void UserEntity::setAge(int age) {
	this->age = age;
}
