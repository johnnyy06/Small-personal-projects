#include "EfecteSpeciale.h"

EfecteSpeciale::EfecteSpeciale(const double newGradCompatibilitate, const std::string& newStareVreme) : gradCompatibilitate(newGradCompatibilitate), stareVreme(newStareVreme)
{
	if (newGradCompatibilitate < 2.5)
	{
		if (newStareVreme == "ploaie")
		{
			this->sonor = "tunet";
			this->vizual = "fulger";
		}

		if (newStareVreme == "soare")
		{
			this->sonor = "gafait";
			this->vizual = "val de caldura";
		}

		if (newStareVreme == "ninsoare")
		{
			this->sonor = "vijelie";
			this->vizual = "furtuna de zapada";
		}
	}

	if (newGradCompatibilitate >= 2.5)
	{
		if (newStareVreme == "ploaie")
		{
			this->sonor = "ploaie relaxanta";
			this->vizual = "picuri pe geam";
		}

		if (newStareVreme == "soare")
		{
			this->sonor = "ciripit pasarele";
			this->vizual = "cer albastru";
		}

		if (newStareVreme == "ninsoare")
		{
			this->sonor = "vant";
			this->vizual = "fulgi de nea";
		}
	}
}

std::string EfecteSpeciale::getEfect() const
{
    std::string result;
    result = this->vizual;
    result += " si ";
    result += this->sonor;

    return result;
}
