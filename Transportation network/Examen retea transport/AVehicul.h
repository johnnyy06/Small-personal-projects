#pragma once
#include "IVehicul.h"
#include "CCertificatInregistrare.h"
#include "CTichetAcces.h"

class AVehicul : public IVehicul
{
protected:
	int ID;
	std::string proprietar;
	int putereMotor;
	CCertificatInregistrare certificatInregistrare;
	CTichetAcces* tichet;

	AVehicul(const int newID, const std::string newProprietar, const int newPutereMotor) : ID(newID), proprietar(newProprietar), putereMotor(newPutereMotor), tichet(nullptr) {}
public:

	// getters
	int						getID()override { return this->ID; }
	std::string				getProprietar()override { return this->proprietar; }
	int						getPutereMotor()override { return this->putereMotor; }
	virtual std::string		getCategorie() = 0;
	CTichetAcces*			getTichet()override { return this->tichet; };

	virtual void			trimiteCerereInregistrare(SRegistrator* registrator) = 0;
	void					pornire(SControlor* controlor, const std::string& tip)override;
	void					oprire()override;
	void					trimiteMesaj(const std::string& newContinut, SStatieBaza* statie)override;

	virtual ~AVehicul();
};

