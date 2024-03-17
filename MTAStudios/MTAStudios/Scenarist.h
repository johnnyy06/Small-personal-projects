#pragma once
#include <vector>
#include "Scena.h"
#include "MTAStudios.h"

class Scenarist : public MTAStudios
{
private:
	std::vector <std::string> schitaScenariu;
	std::vector <Scena> scene;
public:
	Scenarist(const char* filename, const std::string& newName, int newCodIdentificare);
		
	void prezintaRezultat(const char* filename);

	void doJob() override { 
		this->createScene();
		this->numaraAparitiiPersonaje();
		//this->afiseazaAparitii();
		this->transformDialog();
		//this->printScene();
		this->prezintaRezultat("rezultat_Scenarist.txt");
	}

	void createScene();

	void numaraAparitiiPersonaje();

	void afiseazaAparitii();

	void transformDialog();// va pune personajulcare vorbeste in fata replici, 
						   // urmat de ':'

	void printScene();

	void printSchita();

	std::vector <Scena> getScenariu() const { return this->scene; }
};