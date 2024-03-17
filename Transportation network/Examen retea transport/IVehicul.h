#pragma once
#include <iostream>
#include <string>
#include "SRegistrator.h"
#include "SControlor.h"
#include "SStatieBaza.h"
#include "CTichetAcces.h"

class IVehicul
{
public:
	// getters
	virtual int getID() = 0;
	virtual std::string getProprietar() = 0;
	virtual int getPutereMotor() = 0;
	virtual std::string getCategorie() = 0;
	virtual CTichetAcces* getTichet() = 0;

	virtual void trimiteCerereInregistrare(SRegistrator* registrator) = 0;
	virtual void pornire(SControlor* controlor, const std::string& tip) = 0;
	virtual void oprire() = 0;
	virtual void trimiteMesaj(const std::string& newContinut, SStatieBaza* statie) = 0;
};

