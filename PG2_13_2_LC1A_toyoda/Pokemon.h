#pragma once
#include <stdio.h>
class Pokemon
{
public:
	// �R���X�g���N�^
	Pokemon(const char* name);
	~Pokemon();
	Pokemon(const Pokemon& obj);

	const char* GetName() { return name; }

private:
	const char* name;
};

