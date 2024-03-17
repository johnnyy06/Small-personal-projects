#pragma once
#include <vector>
#include "Actor.h"
#include "Personaj.h"
#include "Scena.h"
#include "MTAStudios.h"

class Regizor : public MTAStudios
{
public:
	std::vector <Scena> Scenariu;
	std::vector <Actor> actori;// lista cu actori
	std::vector <Personaj> personaje;// lista cu personaje
	std::vector <double> gradeCompatibilitate; //vector cu gradul de compatibilitatepentru fiecare scena
public:
	Regizor(const std::vector<Scena>& newScenariu,
		const std::vector <Actor> newActori, const std::string& newName,
		int newCodIdentificare);

	void prezintaRezultat(const char* filename) override;

	void doJob() override;

	void gasestePersonaje();

	bool existaPersonaj(std::string wanted);// verifica daca exista un personaj in film

	void imparteRoluri();// asigneaza fiecarui actor un personaj pe care sa-l interpreteze

	void atribuieReplicaPersonajului();// atribuie replicile fiecarui personaj

	void setGradCompatibilitate();// calculeaza gradul de compatibilitate in fiecare scena

	void adaugaCadruSpecific(const std::vector <std::string>& elementeNaturale,
		const std::vector <std::string>& momentulZilei,
		const std::vector <std::string>& stareaVremii);

	void solicitaEfecteSpeciale(Producator prod);

	std::vector <Scena> getScenariu() const { return this->Scenariu; }
};

