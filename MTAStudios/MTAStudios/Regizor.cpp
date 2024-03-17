#include "Regizor.h"
#include <random>
#include <fstream>


Regizor::Regizor(const std::vector<Scena>& newScenariu, const std::vector<Actor> newActori,
	const std::string& newName, int newCodIdentificare) : MTAStudios(newName, newCodIdentificare)
{
	this->Scenariu = newScenariu;
	this->actori = newActori;
}

void Regizor::prezintaRezultat(const char* filename)
{
	std::ofstream file(filename);

	for (auto& i : this->Scenariu)
	{
		for (auto& j : i.getText())
		{
			file << j << " ";
		}
		file << "\n\n";
	}

	file.close();
}

void Regizor::doJob()
{
	this->gasestePersonaje();
	this->imparteRoluri();
	this->atribuieReplicaPersonajului();
	this->setGradCompatibilitate();
	this->prezintaRezultat("rezultat_Regizor.txt");
}

void Regizor::gasestePersonaje()
{
	for (auto& i : this->Scenariu)
	{
		for (const auto& j : i.getPersonaje())
		{
			if (this->existaPersonaj(j.getNume()) == false) this->personaje.push_back(j);
		}
	}
	// daca nu exista, in vector, un personaj care ar trebui sa fie in film, il va adauga
}

bool Regizor::existaPersonaj(std::string wanted)
{
	for (const auto& i : this->personaje)
	{
		if (i.getNume() == wanted) return true;
	}

	return false;
}

void Regizor::imparteRoluri()
{
	if (this->actori.size() < this->personaje.size())
	{
		std::cout << "Este nevoie de mai multi actori!\n";
		exit(1);
	}

	for (int i = 0; i < this->personaje.size(); i++)
	{
		this->actori[i].setPersonaj(this->personaje[i]);
	}
}

void Regizor::atribuieReplicaPersonajului()
{
	std::string newReplica = "";

	for (auto& i : this->Scenariu)
	{
		if (i.getTip() == "Scena dinamica")
			for (auto& j : i.getText())
			{
				if(j.size() > 1)
				if (isupper(j.at(0)) != 0 && j.at(j.size() - 1) == ':')
				{
					std::string wanted = j;
					wanted.erase(wanted.size() - 1);

					for (auto& k : this->personaje)
					{
						if (k.getNume() == wanted)
						{
							k.addReplica(newReplica);
						}
					}
					newReplica = "";
				}
				else
				{
					newReplica += j;
					newReplica += " ";
				}
			}
	}
}

void Regizor::setGradCompatibilitate()
{
	for (auto& i : this->Scenariu)
	{
		double gradComp = i.sumStariSpirit();
		gradComp *= 0.5;
		gradComp /= i.getNrPersonaje();

		this->gradeCompatibilitate.push_back(gradComp);
	}
}

void Regizor::adaugaCadruSpecific(const std::vector<std::string>& elementeNaturale, const std::vector<std::string>& momentulZilei, const std::vector<std::string>& stareaVremii)
{
	std::random_device rd;// seed-ul pentru generator de numere random

	std::mt19937 gen(rd());// Foloseste mt19937 ca un generator de numere random

	std::uniform_int_distribution<> distrib(0, 2);

	for (auto& i : this->Scenariu)
	{
		int randomIndex = distrib(gen);
		int randomIndex1 = distrib(gen);
		int randomIndex2 = distrib(gen);

		// alege un element random pentru fiecare din cele 3 categorii
		std::string randomElement = elementeNaturale[randomIndex];
		std::string randomElement1 = stareaVremii[randomIndex1];
		std::string randomElement2 = momentulZilei[randomIndex2];

		i.addCadru(randomElement, randomElement1, randomElement2);
	}
}

void Regizor::solicitaEfecteSpeciale(Producator prod)
{
	for (int i = 0; i < this->Scenariu.size(); i++)
	{
		this->Scenariu[i].addEfecteSpeciale(gradeCompatibilitate[i], prod);
	}
}
