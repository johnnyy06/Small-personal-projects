#include "CCamion.h"



CCamion::CCamion(const int newID, const std::string newProprietar, const int newPutereMotor, const bool newRemorca) : AVehicul(newID, newProprietar, newPutereMotor), remorca(newRemorca)
{
	std::cout << "\tS-a creat un camion.\n" << "\tID: " << newID << "\n\tProprietar: " << newProprietar <<
		"\n\tPutere motor: " << newPutereMotor << "\n\tRemorca: " << newRemorca << "\n\n";
}

void CCamion::trimiteCerereInregistrare(SRegistrator* registrator)
{
	CCerereInregistrare cerere(this->ID, this->proprietar, this->getCategorie());

	this->certificatInregistrare = registrator->giveCertificatInregistrare(cerere);

	std::cout << this->certificatInregistrare << "\n\n";
}

void CCamion::pornire(SControlor* controlor, const std::string& tip)
{
	CCerereAcces cerere(this->ID, this->getCategorie(), this->certificatInregistrare);

	this->tichet = controlor->giveTichetAcces(cerere, tip);

	std::cout << *(this->tichet) << "\tCamionul a pornit.\n\n";
}

void CCamion::oprire()
{
	if (this->tichet != nullptr)
	{
		delete this->tichet;
		this->tichet = nullptr;
	}

	std::cout << "\tCamionul s-a oprit.\n\n";
}

void CCamion::trimiteMesaj(const std::string& newContinut, SStatieBaza* statie)
{
	statie->stocheaza(this->tichet, newContinut, this->proprietar);

	std::cout << "\tMesaj de la camion: " << newContinut << "\n\n";
}
