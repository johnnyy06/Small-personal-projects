#pragma once
#include "CCertificatInregistrare.h"

class CCerereAcces
{
private:
	int ID;
	std::string categorieVehicul;
	std::string cod;
public:
	CCerereAcces(const int newID, const std::string& newCategorie, const CCertificatInregistrare& newCertificat);

	//getters
	int getID()const { return this->ID; }
	std::string getCategorieVehicul()const { return this->categorieVehicul; }
	std::string getCod()const { return this->cod; }
};

