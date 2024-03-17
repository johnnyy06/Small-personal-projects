#pragma once
#include <iostream>

class EfecteSpeciale
{
private:
	double gradCompatibilitate;
	std::string stareVreme;
	std::string vizual;
	std::string sonor;
public:
	EfecteSpeciale(const double newGradCompatibilitate, const std::string& newStareVreme);

	std::string getVizual() const { return this->vizual; }
	std::string getSonor() const { return this->sonor; }
	double getGradCompatibilitate() const { return this->gradCompatibilitate; }
	std::string getStareVreme() const { return this->stareVreme; }

	std::string getEfect() const;
};

