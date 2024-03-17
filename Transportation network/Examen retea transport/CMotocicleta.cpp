#include "CMotocicleta.h"

CMotocicleta::CMotocicleta(const int newID, const std::string newProprietar, const int newPutereMotor, const bool newAtas) : AVehicul(newID, newProprietar, newPutereMotor), atas(newAtas)
{
	std::cout << "\tS-a creat un camion.\n" << "\tID: " << newID << "\n\tProprietar: " << newProprietar <<
		"\n\tPutere motor: " << newPutereMotor << "\n\tAtas: " << newAtas << "\n\n";
}

void CMotocicleta::trimiteCerereInregistrare(SRegistrator* registrator)
{
	CCerereInregistrare cerere(this->ID, this->proprietar, this->getCategorie());

	this->certificatInregistrare = registrator->giveCertificatInregistrare(cerere);

	std::cout << this->certificatInregistrare << "\n\n";
}

void CMotocicleta::pornire(SControlor* controlor, const std::string& tip)
{
	CCerereAcces cerere(this->ID, this->getCategorie(), this->certificatInregistrare);

	this->tichet = controlor->giveTichetAcces(cerere, tip);

	std::cout << *(this->tichet) << "\tMotocicleta a pornit.\n\n";
}

void CMotocicleta::oprire()
{
	if (this->tichet != nullptr)
	{
		delete this->tichet;
		this->tichet = nullptr;
	}

	std::cout << "\tMotocicleta s-a oprit.\n\n";
}

void CMotocicleta::trimiteMesaj(const std::string& newContinut, SStatieBaza* statie)
{
	statie->stocheaza(this->tichet, newContinut, this->proprietar);

	std::cout << "\tMesaj de la motocicleta: " << newContinut << "\n\n";
}
