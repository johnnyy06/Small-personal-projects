#pragma once
#include "ADispozitiv.h"

class SAlarma : public ADispozitiv
{
private:
	static SAlarma* s_Instance;
	int nrFirma;
	std::string parola;

	SAlarma(const int newID, const std::string& newProprietar, const int newNrFirma, const std::string& newParola) : ADispozitiv(newID, newProprietar), nrFirma(newNrFirma), parola(newParola) {}

	SAlarma(const SAlarma& other) = delete;
	SAlarma&	operator =(const SAlarma& other) = delete;

	SAlarma(SAlarma&& other) = delete;
	SAlarma&	operator =(SAlarma&& other) = delete;
public:
	static SAlarma*		s_getInstance(const int newID, const std::string& newProprietar, const int newNrFirma, const std::string& newParola);

	void				doJob(const bool on)override;
	void				print();

	// getters
	std::string			getDispozitiv()const { return "alarma"; }
	std::string			getCaracteristici()override;

	friend std::ostream& operator <<(std::ostream& outStream, SAlarma& other);
};

std::ostream& operator <<(std::ostream& outStream, SAlarma& other);