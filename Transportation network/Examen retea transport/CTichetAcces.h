#pragma once
#include "CCerereAcces.h"

class CTichetAcces
{
private:
	int ID;
	std::string categorieVehicul;
	int CID;
	std::string tip;
public:
	CTichetAcces(const int newID, const std::string& newCategorie, const int newCID, const std::string newTip) : ID(newID), categorieVehicul(newCategorie), CID(newCID) {}
	CTichetAcces() : ID(0), categorieVehicul(""), CID(0), tip("I") {}
	CTichetAcces(const CCerereAcces& cerere, const int newCID, const std::string newTip);

	std::string getTip()const { return this->tip; }

	friend std::ostream& operator<<(std::ostream& outStream, const CTichetAcces& other);
};

std::ostream& operator<<(std::ostream& outStream, const CTichetAcces& other);