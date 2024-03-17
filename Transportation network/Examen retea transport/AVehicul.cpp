#include "AVehicul.h"

void AVehicul::pornire(SControlor* controlor, const std::string& tip)
{
	std::cout << "\tA pornit un vehicul.\n\n";
}

void AVehicul::oprire()
{
	std::cout << "\tS-a oprit un vehicul.\n\n";
}

void AVehicul::trimiteMesaj(const std::string& newContinut, SStatieBaza* statie)
{
	std::cout << "S-a trimis un mesaj.\n\n";
}

AVehicul::~AVehicul()
{
	std::cout << "\tUn vehicul a trimis un mesaj.\n\n";
}
