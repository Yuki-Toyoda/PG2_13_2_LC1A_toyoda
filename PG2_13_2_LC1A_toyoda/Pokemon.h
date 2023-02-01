#pragma once
#include <stdio.h>
class Pokemon
{
public:
	// コンストラクタ
	Pokemon(const char* name);
	~Pokemon();
	Pokemon(const Pokemon& obj);

	const char* GetName() { return name; }

private:
	const char* name;
};

