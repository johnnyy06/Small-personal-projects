#pragma once
#include "AVehicul.h"

class CCamion : public AVehicul
{
private:
	bool remorca;
public:
	CCamion(const int newID, const std::string newProprietar, const int newPutereMotor, const bool newRemorca);

	// getters
	int				getID()override { return this->ID; }
	std::string		getProprietar()override { return this->proprietar; }
	int				getPutereMotor()override { return this->putereMotor; }
	std::string		getCategorie()override { return "Camion"; }
	CTichetAcces*	getTichet()override { return this->tichet; };

	void			trimiteCerereInregistrare(SRegistrator* registrator)override;
	void			pornire(SControlor* controlor, const std::string& tip)override;
	void			oprire()override;
	void			trimiteMesaj(const std::string& newContinut, SStatieBaza* statie)override;
};

