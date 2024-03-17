#include "CInfo.h"

std::ostream& CInfo::operator<<(std::ostream& outStream)
{
	outStream << this->tichetAcces;
	outStream << "\tProprietar: " << this->proprietar << "\n";
	outStream << "\t" << this->continut << "\n";

	return outStream;
}
