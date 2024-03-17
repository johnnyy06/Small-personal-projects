#include <iostream>
#include "CMotocicleta.h"
#include "CAutoturism.h"
#include "CCamion.h"
#include "CAutobuz.h"
#include "IDGenerator.h"
#include "SRegistrator.h"
#include "SControlor.h"
#include "SStatieBaza.h"

int main() {

	IDGenerator* generator = IDGenerator::s_getInstance();
	SRegistrator* registrator = SRegistrator::s_getInstance(10034);
	SControlor* controlor = SControlor::s_getInstance(10045);
	SStatieBaza* statie = SStatieBaza::s_getInstance();

	IVehicul* firstVehicle = new CAutoturism(generator->getID(), "Andrei Pop", 145, "Motorina");
	firstVehicle->trimiteCerereInregistrare(registrator);

	IVehicul* secondVehicle = new CCamion(generator->getID(), "Mircea Iancau", 450, true);
	secondVehicle->trimiteCerereInregistrare(registrator);

	firstVehicle->pornire(controlor, "IU");
	secondVehicle->pornire(controlor, "IU");

	firstVehicle->trimiteMesaj("blablabla", statie);

	secondVehicle->trimiteMesaj("Sunt pe drum", statie);

	firstVehicle->oprire();

	firstVehicle->pornire(controlor, "I");

	firstVehicle->trimiteMesaj("blablabla", statie);
	secondVehicle->trimiteMesaj("Sunt pe drum", statie);

	firstVehicle->oprire();
	secondVehicle->oprire();

	return 0;
}