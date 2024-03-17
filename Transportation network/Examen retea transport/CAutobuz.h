#pragma once
#include "AVehicul.h"

class CAutobuz : public AVehicul
{
private:
	int nrPasageri;
public:
	CAutobuz(const int newID, const std::string newProprietar, const int newPutereMotor, const int newNrPasageri);

	// getters
	int				getID()override { return this->ID; }
	std::string		getProprietar()override { return this->proprietar; }
	int				getPutereMotor()override { return this->putereMotor; }
	std::string		getCategorie()override { return "Autobuz"; }
	CTichetAcces*	getTichet()override { return this->tichet; };

	void			trimiteCerereInregistrare(SRegistrator* registrator)override;
	void			pornire(SControlor* controlor, const std::string& tip)override;
	void			oprire()override;
	void			trimiteMesaj(const std::string& newContinut, SStatieBaza* statie)override;
};

