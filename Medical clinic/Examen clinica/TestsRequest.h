#pragma once
#include <iostream>
#include <vector>
#include "Diagnostic.h"

class TestsRequest : public Diagnostic
{
private:
	int id; // trebuie sa fie unic
	Data releaseDate;
	Employee whoRelease;
	std::vector <std::string> nameList;
public:
	TestsRequest(const int newID, const Data& newDate, const Employee& newWhoRelease, const std::vector <std::string>& newList) :
		id(newID), releaseDate(newDate), whoRelease(newWhoRelease), nameList(newList) {}

	void print();
};

