#pragma once
#include"AMesaj.h"

class CInfo : public AMesaj
{
private:
	std::string proprietar;
public:
	CInfo(const CTichetAcces& newTichetAcces, const std::string& newContinut, const std::string& newProprietar) 
		: AMesaj(newTichetAcces, newContinut), proprietar(newProprietar) {}

	CTichetAcces getTichetAcces()const override { return this->tichetAcces; }
	std::string getContinut()const override { return this->continut; }

	std::ostream& operator<<(std::ostream& outStream);
};

