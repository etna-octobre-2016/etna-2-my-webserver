#include "DatabaseField.h"
template <DatabaseFieldType DatabaseFieldType>
DatabaseField<DatabaseFieldType>::DatabaseField(string name, DatabaseFieldType value) {
	// TODO - implement DatabaseField::DatabaseField
	throw "Not yet implemented";
}
template <DatabaseFieldType DatabaseFieldType>
string DatabaseField<DatabaseFieldType>::getName() {
	return this->name;
}
template <DatabaseFieldType DatabaseFieldType>
DatabaseFieldType DatabaseField<DatabaseFieldType>::getValue() {
	return this->value;
}
