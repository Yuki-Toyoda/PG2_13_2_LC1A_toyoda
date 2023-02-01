#include "Pokemon.h"

Pokemon:: Pokemon(const char* name) {
	this->name = name;
}

Pokemon::~Pokemon() {

}

Pokemon::Pokemon(const Pokemon& obj) {
	printf("%s‚ğƒRƒs[‚µ‚Ü‚·\n", obj.name);

	name = obj.name;
}
