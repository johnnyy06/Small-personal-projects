#include "CAutoturism.h"

CAutoturism::CAutoturism(const int newID, const std::string newProprietar, const int newPutereMotor, const std::string& newCarburant) : AVehicul(newID, newProprietar, newPutereMotor), carburant(newCarburant)
{
	std::cout << "\tS-a creat un autoturism.\n" << "\tID: " << newID << "\n\tProprietar: " << newProprietar <<
		"\n\tPutere motor: " << newPutereMotor <<"\n\tCarburant: " << newCarburant << "\n\n";
}

void CAutoturism::trimiteCerereInregistrare(SRegistrator* registrator)
{
	CCerereInregistrare cerere(this->ID, this->proprietar, this->getCategorie());

	this->certificatInregistrare = registrator->giveCertificatInregistrare(cerere);

	std::cout << this->certificatInregistrare << "\n\n";
}

void CAutoturism::pornire(SControlor* controlor, const std::string& tip)
{
	if (this->tichet != nullptr) return;

	CCerereAcces cerere(this->ID, this->getCategorie(), this->certificatInregistrare);

	this->tichet = controlor->giveTichetAcces(cerere, tip);

	std::cout << *(this->tichet) << "\tAutoturismul a pornit.\n\n";
}

void CAutoturism::oprire()
{
	if (this->tichet!= nullptr)
	{
		delete this->tichet;
		this->tichet = nullptr;
	}

	std::cout << "\tAutoturismul s-a oprit.\n\n";
}

void CAutoturism::trimiteMesaj(const std::string& newContinut, SStatieBaza* statie)
{
	statie->stocheaza(this->tichet, newContinut, this->proprietar);

	std::cout << "\tMesaj de la autoturism: " << newContinut<<"\n\n";
}
