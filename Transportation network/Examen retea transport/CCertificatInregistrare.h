#pragma once
#include <iostream>
#include <string>
#include "CCerereInregistrare.h"

class CCertificatInregistrare
{
private:
	int				ID;
	std::string		categorieVehicul;
	std::string		cod;
public:
	CCertificatInregistrare(const int newID, const std::string& newCategorie, const int RID);
	CCertificatInregistrare() : ID(0), categorieVehicul(""), cod("") {}
	CCertificatInregistrare(const CCerereInregistrare& newCerere, const int newRID);

	// getters
	std::string		getCod()const { return this->cod; }

	friend std::ostream& operator<<(std::ostream& outStream, const CCertificatInregistrare& other);
};

std::ostream& operator<<(std::ostream& outStream, const CCertificatInregistrare& other);