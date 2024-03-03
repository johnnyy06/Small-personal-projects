#pragma once
#include "IDispozitiv.h"

class ADispozitiv : public IDispozitiv
{
protected:
	int ID;
	std::string proprietar;

	ADispozitiv(const int newID, const std::string& newProprietar) : ID(newID), proprietar(newProprietar) {}
public:

	// getters
	int						getID()const { return this->ID; }
	std::string				getProducator()const { return this->proprietar; }
	std::string				getDispozitiv()const = 0;
	virtual std::string		getCaracteristici() = 0;

	virtual void			doJob(const bool on) = 0;
	void					print();
};