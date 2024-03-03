#include "CSenzor.h"

void CSenzor::doJob(const bool on)
{
	if (pornire == true && on == true) return;

	if (pornire == false && on == false) return;

	if (on == true) pornire = true;

	if (on == false) pornire = false;
}

void CSenzor::print()
{
	std::cout << *this;
}

std::string CSenzor::getCaracteristici()
{
	std::string caracteristici;

	caracteristici = "Distanta: ";
	caracteristici += std::to_string(this->distanta);

	caracteristici += "\tON: ";
	caracteristici += std::to_string(this->pornire);

	return caracteristici;
}

std::ostream& operator<<(std::ostream& outStream, CSenzor& other)
{
	outStream << "\tAcesta este un senzor video. " << other.getCaracteristici() << "\n\n";

	return outStream;
}
