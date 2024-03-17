#pragma once
#include "IPerson.h"
#include <iostream>
#include <string>

class APerson
{
protected:
	std::string name;
	std::string adress;
public:
	APerson(std::string newName, std::string newAdress) : name(newName), adress(newAdress) {}
	//getters
	std::string getName() const { return this->name; }
	std::string getAdress() const { return this->adress; }

	virtual void setAppointment(const Data& newDate, const int duration);
};

