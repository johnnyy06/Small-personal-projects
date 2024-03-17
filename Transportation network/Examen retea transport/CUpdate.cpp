#include "CUpdate.h"

std::ostream& CUpdate::operator<<(std::ostream& outStream)
{
	outStream << this->tichetAcces;
	outStream << "\tMoment creare : " << this->epochTime << "\n";
	outStream << "\t" << this->continut << "\n";

	return outStream;
}
