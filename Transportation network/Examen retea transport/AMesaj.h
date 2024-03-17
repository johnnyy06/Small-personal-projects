#pragma once
#include "IMesaj.h"

class AMesaj : public IMesaj
{
protected:
	CTichetAcces tichetAcces;
	std::string continut;

	AMesaj(const CTichetAcces& newTichetAcces, const std::string& newContinut) : tichetAcces(newTichetAcces), continut(newContinut) {}
public:

	//getters
	CTichetAcces getTichetAcces()const override { return this->tichetAcces; }
	std::string getContinut()const override { return this->continut; }

	virtual std::ostream& operator<<(std::ostream& outStream) = 0;
};

