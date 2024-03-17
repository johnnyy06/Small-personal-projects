#include "Producator.h"

Producator::Producator(const std::string& newName, int newCodIdentificare) : 
	MTAStudios(newName, newCodIdentificare)
{
	std::string efectSonor;
	std::string efectVizual;

	EfecteSpeciale temp(1, "ploaie");
	efect.push_back(temp);

	EfecteSpeciale temp1(1, "ninsoare");
	efect.push_back(temp1);

	EfecteSpeciale temp2(1, "soare");
	efect.push_back(temp2);

	EfecteSpeciale temp3(4, "ploaie");
	efect.push_back(temp3);

	EfecteSpeciale temp4(4, "soare");
	efect.push_back(temp4);

	EfecteSpeciale temp5(4, "ninsoare");
	efect.push_back(temp5);
}

std::string Producator::getEfect(const double gradComp, const std::string& vreme) const
{
	std::string result = "atmosfera default";

	for (const auto& i : this->efect)
	{
		// daca gradul de compatibilitate este mai mic decat limita <2.5> => o situatie trista, o atmosfera rece
		if (gradComp < 2.5 && i.getGradCompatibilitate() < 2.5 && i.getStareVreme() == vreme)
		{
			return i.getEfect();
		}

		// daca gradul de compatibilitate este mai mare decat limita <2.5> => o situatie fericita, o atmosfera primitoare
		if (gradComp >= 2.5 && i.getGradCompatibilitate() >= 2.5 && i.getStareVreme() == vreme)
		{
			return i.getEfect();
		}
	}

	return result;
}
