#pragma once
#include <iostream>
#include <string>

class IDGenerator
{
private:
	static IDGenerator* s_Instance;
	int ID;

	IDGenerator() { ID = 1; };
	IDGenerator(const IDGenerator& other) = delete;
	IDGenerator(IDGenerator&& other) = delete;
	IDGenerator* operator =(const IDGenerator& other) = delete;
	IDGenerator* operator =(IDGenerator&& other) = delete;
public:
	static IDGenerator* s_getInstance();

	// getters
	int getID();
};

