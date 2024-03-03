#pragma once
#include "CCameraVideo.h"
#include "CSenzor.h"
#include "SAlarma.h"
#include "CTastatura.h"
#include "list"
#include <fstream>
#include <vector>

class SUnitateCentrala
{
private:
	static SUnitateCentrala* s_Instance;
	std::list <int> nrFirme;
	std::vector <IDispozitiv*> dispozitive;

	SUnitateCentrala() {}

	SUnitateCentrala(const SUnitateCentrala& other) = delete;
	SUnitateCentrala& operator =(const SUnitateCentrala& other) = delete;

	SUnitateCentrala(SUnitateCentrala&& other) = delete;
	SUnitateCentrala& operator =(SUnitateCentrala&& other) = delete;
public:
	static SUnitateCentrala* s_getInstance();

	void addNrFirma(const int newNr);

	void addAlarma(const int newID, const std::string newProprietar, const std::string& filename);

	void addCamera(const int newID, const std::string newProprietar, const int newRezolutie);

	void addSenzor(const int newID, const std::string& newProprietar, const int newDistanta);

	void afiseazaMesaje();

	void modFilmareCamere(const bool nightMode);

	void activeazaSenzori();

	void dezactiveazaSenzori();
};

