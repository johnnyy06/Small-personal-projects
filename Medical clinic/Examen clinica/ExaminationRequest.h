#pragma once
#include "Diagnostic.h"

class ExaminationRequest : public Diagnostic
{
private:
	int id; // trebuie sa fie unic
	Data releaseDate;
	Employee whoRelease;
	std::string doctorName;
public:
	ExaminationRequest(const int ID, const Data& newDate, const Employee& newWhoRelease, const std::string& newDoctorName) :
		id(ID), releaseDate(newDate), whoRelease(newWhoRelease), doctorName(newDoctorName) {}

	void print();
};

