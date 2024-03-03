#pragma once
#include "ADispozitiv.h"

class CSenzor : public ADispozitiv
{
private:
	int distanta;
	bool pornire;
public:
	CSenzor(const int newID, const std::string& newProprietar, const int newDistanta) : ADispozitiv(newID, newProprietar), distanta(newDistanta), pornire(false) {}

	void			doJob(const bool on)override;
	void			print();

	// getters
	std::string		getDispozitiv()const override { return "senzor"; }
	std::string		getCaracteristici()override;

	friend std::ostream& operator <<(std::ostream& outStream, CSenzor& other);
};

std::ostream& operator <<(std::ostream& outStream, CSenzor& other);