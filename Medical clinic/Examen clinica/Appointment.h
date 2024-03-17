#pragma once
#include "Data.h"
#include "APerson.h"
#include <vector>

class Appointment
{
protected:
	Data data;
	int duration;
	std::vector <APerson*> pList;
public:
	Appointment(const Data& newDate, const int newDuration) :
		data(newDate), duration(newDuration) {}

	void addDate(const Data& newDate);
	void addDuration(const int newDuration);
	void addPerson(APerson* newPerson);

	void print();
};