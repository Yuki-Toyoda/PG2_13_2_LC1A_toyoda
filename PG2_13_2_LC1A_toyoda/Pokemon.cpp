#include "Pokemon.h"

Pokemon:: Pokemon(const char* name) {
	this->name = name;
}

Pokemon::~Pokemon() {

}

Pokemon::Pokemon(const Pokemon& obj) {
	printf("%s���R�s�[���܂�\n", obj.name);

	name = obj.name;
}
