#pragma once
#include <iostream>
#include <vector>
#include "Personaj.h"

class Actor
{
private:
	std::string numeActor;
	std::string tipActor;

	Personaj personaj;

	double stareSpirit;
public:
	Actor(const std::string& newNameActor, std::string newTipActor,
		const double newStareSpirit);

	void updateNume(const std::string& newName);
	void updateStareSpirit(); // aceasta functie fa trebui apelata neaparat la crearea
							  // unui actor nou, dupa functia de update personaj

	void setPersonaj(Personaj newPersonaj);

	std::string getNumeActor() const { return this->numeActor; }
	std::string getTipActor() const { return this->tipActor; }
	double getStareSpirit() const { return this->stareSpirit; }

	std::string getNumePersonaj() const { return this->personaj.getNume(); }
	std::string getTipPersonaj() const { return this->personaj.getTip(); }
};

