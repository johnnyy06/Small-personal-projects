#pragma once
#include "AVehicul.h"
#include "SRegistrator.h"
#include "SControlor.h"

class CAutoturism : public AVehicul
{
private:
	std::string	carburant;
public:
	CAutoturism(const int newID, const std::string newProprietar, const int newPutereMotor, const std::string& newCarburant);

	// getters
	int				getID()override { return this->ID; }
	std::string		getProprietar()override { return this->proprietar; }
	int				getPutereMotor()override { return this->putereMotor; }
	std::string		getCategorie()override { return "Autoturism"; }
	CTichetAcces*	getTichet()override { return this->tichet; };

	void			trimiteCerereInregistrare(SRegistrator* registrator)override;
	void			pornire(SControlor* controlor, const std::string& tip)override;
	void			oprire()override;
	void			trimiteMesaj(const std::string& newContinut, SStatieBaza* statie)override;
};

