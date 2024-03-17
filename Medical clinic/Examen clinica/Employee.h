#pragma once
#include "APerson.h"

class Employee : public APerson
{
protected:

public:
	Employee(std::string newName, std::string newAdress) : APerson(newName, adress) {}


	virtual void setAppointment(const Data& newDate, const int duration);
};

