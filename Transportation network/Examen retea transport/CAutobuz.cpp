#include "CAutobuz.h"

CAutobuz::CAutobuz(const int newID, const std::string newProprietar, const int newPutereMotor, const int newNrPasageri) : AVehicul(newID, newProprietar, newPutereMotor), nrPasageri(newNrPasageri)
{
	std::cout << "\tS-a creat un camion.\n" << "\tID: " << newID << "\n\tProprietar: " << newProprietar <<
		"\n\tPutere motor: " << newPutereMotor << "\n\tNumar pasageri: " << newNrPasageri << "\n\n";
}

void CAutobuz::trimiteCerereInregistrare(SRegistrator* registrator)
{
	CCerereInregistrare cerere(this->ID, this->proprietar, this->getCategorie());

	this->certificatInregistrare = registrator->giveCertificatInregistrare(cerere);

	std::cout << this->certificatInregistrare << "\n\n";
}

void CAutobuz::pornire(SControlor* controlor, const std::string& tip)
{
	CCerereAcces cerere(this->ID, this->getCategorie(), this->certificatInregistrare);

	this->tichet = controlor->giveTichetAcces(cerere, tip);

	std::cout << *(this->tichet) << "\tAutobuzul a pornit.\n\n";
}

void CAutobuz::oprire()
{
	if (this->tichet != nullptr)
	{
		delete this->tichet;
		this->tichet = nullptr;
	}

	std::cout << "\tAutobuzul s-a oprit.\n\n";
}

void CAutobuz::trimiteMesaj(const std::string& newContinut, SStatieBaza* statie)
{
	statie->stocheaza(this->tichet, newContinut, this->proprietar);

	std::cout << "\tMesaj de la autobuz: " << newContinut << "\n\n";
}
