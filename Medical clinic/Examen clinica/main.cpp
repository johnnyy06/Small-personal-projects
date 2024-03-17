#include <iostream>
#include "Clinique.h"
#include "Surgeon.h"
#include "Nurse.h"
#include "Patient.h"


int main() {

	Clinique* clinique = Clinique::s_getInstance();

	Doctor* doctor = new Doctor("Maja", "Bulevardul Cetatea Fetei, 24");

	Surgeon* surgeon = new Surgeon("Tavianis", "Prin Filiasi pe undeva");

	Nurse* nurse = new Nurse("Stancone", "In incinta ATM");

	Patient* patient = new Patient("Lovitu'", "Strada Livezii, 49");

	Data firstAppointment(12, 6, 2005, 14, 10);
	patient->setAppointment(firstAppointment, 60);

	return 0;
}