#include "Appointment.h"

void Appointment::addDate(const Data& newDate)
{
	this->data = newDate;
}

void Appointment::addDuration(const int newDuration)
{
	this->duration = newDuration;
}

void Appointment::addPerson(APerson* newPerson)
{
	pList.push_back(newPerson);
}

void Appointment::print()
{
	std::cout << "\t" << data;
	std::cout << "\tDuration: " << duration << "\n";

	std::cout << "\tPeople who taken part: " ;
	for (const auto& i : pList)
	{
		std::cout << i->getName();
		std::cout << "\t";
	}
	std::cout << "\n\n\n";
}