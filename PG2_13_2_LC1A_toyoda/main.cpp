#include <stdio.h>
#include "Pokemon.h"

int main() {

	Pokemon* pokemon1 = new Pokemon("ピカチュウ");

	printf("1体目 : %s\n", pokemon1->GetName());

	Pokemon* pokemon2 = new Pokemon(*pokemon1);

	printf("2体目 : %s\n", pokemon2->GetName());

	delete pokemon1;
	delete pokemon2;

}