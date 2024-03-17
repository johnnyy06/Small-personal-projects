#include "Scenarist.h"
#include <fstream>

Scenarist::Scenarist(const char* filename, const std::string& newName, int newCodIdentificare) :
	MTAStudios(newName, newCodIdentificare)
{
	std::ifstream file(filename);
	std::string temp;

	while (file.eof() == false)
	{
		file >> temp;
		schitaScenariu.push_back(temp);
	}
}

void Scenarist::createScene()
{
	Scena temp;
	int indexCuvantScena = 0;

	for (const auto& i : this->schitaScenariu)
	{
		if (i != "@")
		{
			temp.addText(i);
			if (isupper(i.at(0)) != 0 && indexCuvantScena != 0)
			{
				// daca este prima aparitie a personajului atunci acesta va fi adaugat
				// in vectorul de personaje din scena
				if(temp.searchPersonaj(i) == false)
				temp.addPersonaj(i);
			}
			indexCuvantScena++;
		}
		else
		{
			// se seteaza tipul de scena si se adauga scena in vector de scene
			temp.setTip();
			this->scene.push_back(temp);

			temp.reset(); // reseteaza variabila care retine temporar o scena
						  // astfel va fi disponibila pentru a retine alta scena
			indexCuvantScena = 0;
		}
	}
}

void Scenarist::numaraAparitiiPersonaje()
{
	for (auto& i : this->scene)
	{
		i.getAparitii();
	}
}

void Scenarist::afiseazaAparitii()
{
	for (auto& i : this->scene)
	{
		i.printAparitii();
	}
}

void Scenarist::transformDialog()
{
	for (auto& i : this->scene)
	{
		i.adaugaAdnotari();
	}
}

void Scenarist::printScene()
{
	for (auto& i : this->scene)
	{
		i.printText(); // afiseaza tot textul dintr-o scena
	}
}

void Scenarist::printSchita() // afiseaza tot textul exact cum este in fisier
{
	for (const auto& i : this->schitaScenariu)
	{
		std::cout << i << " ";
	}
	std::cout << "\n\n";
}

void Scenarist::prezintaRezultat(const char* filename)
{
	std::ofstream file(filename);

	for (auto& i : this->scene)
	{
		for (auto& j : i.getText())
		{
			file << j << " ";
		}
		file << "\n\n";
	}

	file.close();
}
