#pragma once
#include <vector>
#include "Scena.h"
#include "MTAStudios.h"

class Director : public MTAStudios
{
private:
	std::vector <Scena> Scenariu;
	std::vector <int> firNarativ;
public:
	Director(const std::vector <Scena>& newScenariu,
		const std::vector <int>& newFirNarativ,
		const std::string& newName, int newCodIdentificare);

	void prezintaRezultat(const char* filename) override;

	void doJob() override;

	void rearanjareFilm();

	void redareFilm();

	void noteazaScena();
};

