#pragma once
#include <iostream>

class MTAStudios
{
protected:
	std::string nume;
	int codIdentificare;
public:
	MTAStudios(const std::string newName, int newCodIdentificare) : 
		nume(newName), codIdentificare(newCodIdentificare) {}

	virtual void doJob() = 0;

	virtual void prezintaRezultat(const char* filename) = 0;
};