#pragma once
#include <iostream>
#include <string>

class CCerereInregistrare
{
private:
	int ID;
	std::string proprietar;
	std::string categorieVehicul;
public:
	CCerereInregistrare(const int newID, const std::string& newProprietar, const std::string& newCategorie) :
		ID(newID), proprietar(newProprietar), categorieVehicul(newCategorie) {}

	// getters
	int getID()const { return this->ID; }
	std::string getProprietar()const { return this->proprietar; }
	std::string getCategorieVehicul()const { return this->categorieVehicul; }
};

