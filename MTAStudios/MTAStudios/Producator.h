#pragma once
#include "EfecteSpeciale.h"
#include <vector>
#include "MTAStudios.h"

class Producator : public MTAStudios
{
private:
	std::vector <EfecteSpeciale> efect;
public:
	Producator(const std::string& newName, int newCodIdentificare);

	void prezintaRezultat(const char* filename) {  }

	void doJob() override { ; }

	std::string getEfect(const double gradComp, const std::string& vreme) const;
};