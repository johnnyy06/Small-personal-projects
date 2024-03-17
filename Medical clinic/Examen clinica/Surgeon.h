#pragma once
#include "Doctor.h"

class Surgeon : public Doctor
{
private:

public:
	Surgeon(std::string newName, std::string newAdress) : Doctor(newName, newAdress) {}

	void setAppointment(const Data& newDate, const int duration);

	void scheduleOperation();
};

