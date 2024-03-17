#pragma once
#include "Diagnostic.h"
#include <vector>

class MedicalSuggestion : public Diagnostic
{
private:
	int id; // trebuie sa fie unic
	Data releaseDate;
	Employee whoRelease;
	std::vector <std::pair<std::string, int>> drugList;
public:
	MedicalSuggestion(const int ID, const Data& newDate, const Employee& newWhoRelease, const std::vector <std::pair<std::string, int>>& newDrugList) :
		id(ID), releaseDate(newDate), whoRelease(newWhoRelease), drugList(newDrugList) {}

	void print();
};

