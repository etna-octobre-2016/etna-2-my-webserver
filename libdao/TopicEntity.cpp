#include "TopicEntity.h"

int TopicEntity::getId() {
	return this->id;
}

string TopicEntity::getTitle() {
	return this->title;
}

string TopicEntity::getCreationDate() {
	return this->creationDate;
}

PostEntity TopicEntity::getLastPost() {
	return this->lastPost;
}

void TopicEntity::setId(int id) {
	this->id = id;
}

void TopicEntity::setTitle(string title) {
	this->title = title;
}

void TopicEntity::setCreationDate(string creationDate) {
	this->creationDate = creationDate;
}

void TopicEntity::setLastPost(PostEntity lastPost) {
	this->lastPost = lastPost;
}
