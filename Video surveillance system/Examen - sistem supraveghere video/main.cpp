#include <iostream>
#include "SUnitateCentrala.h"

int main() {

	SUnitateCentrala* uc = SUnitateCentrala::s_getInstance();

	uc->addNrFirma(5556245);
	uc->addNrFirma(5554106);
	uc->addNrFirma(5551498);

	std::string filename = "parola.txt";
	uc->addAlarma(2387, "Radu Sava", filename);

	uc->addCamera(9375, "Radu Sava", 1990);
	uc->addCamera(9385, "Radu Sava", 1080);

	uc->addSenzor(1023, "Radu Sava", 5);
	uc->addSenzor(1045, "Radu Sava", 5);
	uc->addSenzor(1067, "Radu Sava", 5);

	uc->activeazaSenzori();

	uc->modFilmareCamere(true);

	uc->modFilmareCamere(false);

	uc->afiseazaMesaje();

	return 0;
}