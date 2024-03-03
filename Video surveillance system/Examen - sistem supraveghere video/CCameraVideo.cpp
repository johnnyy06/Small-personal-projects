#include "CCameraVideo.h"

void CCameraVideo::doJob(const bool on)
{
	if (on == true && nightMode == true) return;

	if (on == false && nightMode == false) return;

	if (on == true)
	{
		rezolutie /= 2;
		nightMode = true;
	}

	if (on == false)
	{
		rezolutie *= 2;
		nightMode = false;
	}
}

void CCameraVideo::print()
{
	std::cout << *this;
}

std::string CCameraVideo::getCaracteristici()
{
	std::string caracteristici;

	caracteristici = "Rezolutie: ";
	caracteristici += std::to_string(this->rezolutie);

	caracteristici += "\tNightMode: ";
	caracteristici += std::to_string(this->nightMode);

	return caracteristici;
}

std::ostream& operator<<(std::ostream& outStream, CCameraVideo& other)
{
	outStream << "\tAceasta este o camera video. " << other.getCaracteristici() << "\n\n";

	return outStream;
}
