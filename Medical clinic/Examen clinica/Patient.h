#pragma once
#include "APerson.h"
#include "MedicalRecords.h"

class Patient : public APerson
{
private:
	MedicalRecords medRecord;
public:
	Patient(std::string newName, std::string newAdress) : APerson(newName, adress), medRecord() {}

	void setAppointment(const Data& newDate, const int duration);
};

