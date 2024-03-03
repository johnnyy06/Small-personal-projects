#pragma once
#include "ADispozitiv.h"

class CCameraVideo : public ADispozitiv
{
private:
	int rezolutie;
	bool nightMode;
public:
	CCameraVideo(const int newID, const std::string& newProprietar, const int newRezolutie) : ADispozitiv(newID, newProprietar), rezolutie(newRezolutie), nightMode(false) {}

	void			doJob(const bool on)override;
	void			print();

	// getters
	std::string		getDispozitiv()const { return "camera"; }
	std::string		getCaracteristici()override;

	friend std::ostream& operator <<(std::ostream& outStream, CCameraVideo& other);
};

std::ostream& operator <<(std::ostream& outStream, CCameraVideo& other);