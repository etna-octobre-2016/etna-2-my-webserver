#include "PostEntity.h"

int PostEntity::getId() {
	return this->id;
}

UserEntity PostEntity::getAuthor() {
	return this->author;
}

string PostEntity::getMessage() {
	return this->message;
}

string PostEntity::getCreationDate() {
	return this->creationDate;
}

void PostEntity::setId(int id) {
	this->id = id;
}

void PostEntity::setAuthor(UserEntity author) {
	this->author = author;
}

void PostEntity::setMessage(string message) {
	this->message = message;
}

void PostEntity::setCreationDate(string creationDate) {
	this->creationDate = creationDate;
}
