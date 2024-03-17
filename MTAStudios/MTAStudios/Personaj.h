#pragma once
#include <iostream>
#include <vector>

class Personaj
{
private:
	std::string nume;
	std::string tip;
	std::vector <std::string> replici;// contine toate replicile personajului
public:
	Personaj() {  }

	Personaj(const std::string& newName) : nume(newName) {  }

	std::string getTip() const { return this->tip; }

	std::string getNume() const { return this->nume; }

	void addReplica(const std::string& newReplica);

	void setTip(const std::string& newTip);
};

