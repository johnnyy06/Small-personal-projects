#include "Director.h"
#include <fstream>

Director::Director(const std::vector<Scena>& newScenariu,
	const std::vector<int>& newFirNarativ,
	const std::string& newName, int newCodIdentificare) : Scenariu(newScenariu), firNarativ(newFirNarativ), 
	MTAStudios(newName, newCodIdentificare)
{
}

void Director::prezintaRezultat(const char* filename)
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

void Director::doJob()
{
	this->rearanjareFilm();
	this->noteazaScena();
	this->prezintaRezultat("rezultat_Director.txt");
	this->redareFilm();
}

void Director::rearanjareFilm()
{
	for (int i = 0; i < firNarativ.size(); i++)
	{
		// interschimba scenele
		Scena temp;
		temp = this->Scenariu[i];
		this->Scenariu[i] = this->Scenariu[this->firNarativ[i] - 1];
		this->Scenariu[this->firNarativ[i] - 1] = temp;
	}
}

void Director::redareFilm()
{
	for (auto& i : this->Scenariu)
	{
		i.printText();
	}
}

void Director::noteazaScena()
{
	for (int i = 0; i < this->Scenariu.size(); i++)
	{
		this->Scenariu[i].addNotareScena(i + 1);
	}
}
