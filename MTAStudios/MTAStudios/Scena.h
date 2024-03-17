#pragma once
#include <iostream>
#include <vector>
#include "Personaj.h"
#include "Actor.h"
#include "Producator.h"


class Scena
{
private:
	std::vector <std::string> text; // scena propriu-zisa
	std::string tip; // dinamica sau statica
	std::vector <std::pair<Personaj, int>> personaje;
	std::vector <Actor> actori; // lista cu actorii ce participa la scena
	std::vector <std::string> cadru; // vectorul "cadru" va contine o serie de elemente despre cadrul inconjurator
	std::string efecteSpeciale;
	int nrPersonaje;
public:
	Scena() : nrPersonaje(0) {  }

	void addPersonaj(const std::string& newPersonaj);
	bool searchPersonaj(const std::string& wanted);
	std::vector <Personaj> getPersonaje();

	void addText(const std::string& newText);
	void printText();

	void adaugaAdnotari();

	void addCadru(const std::string& elementNatural, const std::string& vreme, 
		const std::string& momentZi);

	void addEfecteSpeciale(double gradCompatib, Producator producator);

	void setTip();
	std::string getTip() const { return this->tip; }

	void getAparitii();
	void printAparitii();

	std::vector <std::string> getText() const { return this->text; }

	double sumStariSpirit();

	void addNotareScena(int nrScena);// noteaza numarul scenei

	void reset();

	int getNrPersonaje() const { return this->nrPersonaje; }
};

