#include "CCertificatInregistrare.h"

CCertificatInregistrare::CCertificatInregistrare(const int newID, const std::string& newCategorie, const int RID) : ID(newID), categorieVehicul(newCategorie)
{
	this->cod = std::to_string(newID);
	this->cod += std::to_string(RID);
	this->cod += std::to_string(rand() % 3000 + 1);
}

CCertificatInregistrare::CCertificatInregistrare(const CCerereInregistrare& newCerere, const int newRID)
{
	this->ID = newCerere.getID();

	this->categorieVehicul = newCerere.getCategorieVehicul();

	this->cod = std::to_string(newCerere.getID());
	this->cod += std::to_string(newRID);
	this->cod += std::to_string(rand() % 3000 + 1);
}

std::ostream& operator<<(std::ostream& outStream, const CCertificatInregistrare& other)
{
	outStream << "\tCertificat de inregistrare\tID: "<<other.ID;
	outStream << "\tPentru: " << other.categorieVehicul << "\tCod: " << other.cod << "\n";

	return outStream;
}
