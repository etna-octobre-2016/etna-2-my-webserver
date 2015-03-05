#include "Post.h"

int Post::getId() {
	return this->id;
}

User Post::getAuthor() {
	return this->author;
}

string Post::getMessage() {
	return this->message;
}

string Post::getCreationDate() {
	return this->creationDate;
}

void Post::setId(int id) {
	this->id = id;
}

void Post::setAuthor(User author) {
	this->author = author;
}

void Post::setMessage(string message) {
	this->message = message;
}

void Post::setCreationDate(string creationDate) {
	this->creationDate = creationDate;
}

DatabaseRow Post::toDatabaseRow() {
	// TODO - implement Post::toDatabaseRow
	throw "Not yet implemented";
}
