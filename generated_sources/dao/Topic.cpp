#include "Topic.h"

int Topic::getId() {
	return this->id;
}

string Topic::getTitle() {
	return this->title;
}

string Topic::getCreationDate() {
	return this->creationDate;
}

Post Topic::getLastPost() {
	return this->lastPost;
}

void Topic::setId(int id) {
	this->id = id;
}

void Topic::setTitle(string title) {
	this->title = title;
}

void Topic::setCreationDate(string creationDate) {
	this->creationDate = creationDate;
}

void Topic::setLastPost(Post lastPost) {
	this->lastPost = lastPost;
}

DatabaseRow Topic::toDatabaseRow() {
	// TODO - implement Topic::toDatabaseRow
	throw "Not yet implemented";
}
