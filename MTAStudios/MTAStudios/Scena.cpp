#include "Scena.h"
#include <fstream>
#include <string>

void Scena::addPersonaj(const std::string& newPersonaj)
{
    std::pair <Personaj, int> temp(newPersonaj, 0);

    this->personaje.push_back(temp);
    this->nrPersonaje++;
}

bool Scena::searchPersonaj(const std::string& wanted)
{
    for (const auto& i : this->personaje)
    {
        if (i.first.getNume() == wanted) return true;
    }

    return false;
}

std::vector<Personaj> Scena::getPersonaje()
{
    std::vector <Personaj> temp;

    for (const auto& i : this->personaje)
    {
        temp.push_back(i.first);
    }

    return temp;
}

void Scena::addText(const std::string& newText)
{
    this->text.push_back(newText);
}

void Scena::printText()
{
    for (const auto& i : this->text)
    {
        std::cout << i << " ";
    }
    std::cout << "\n\n\n";
}

void Scena::adaugaAdnotari()
{
    if (this->tip != "Scena dinamica") return;

    int index = 0;
    for (int i = 1; i < this->text.size(); i++)
    {
        if (this->text[i].at(0) == '-') index = i;

        if ((this->text[i] == "zise" || this->text[i] == "intreba" || this->text[i] == "exclama") && this->text[i - 1] == ",")
        {
            std::string tempPersonaj = this->text[i + 1];
            this->text[i - 1].clear();
            this->text[i].clear();
            this->text[i + 1].clear();
            this->text[i + 2].clear();
            this->text[i + 2] = "\n";

            i += 2;

            this->text.insert(this->text.begin() + index, tempPersonaj + ":");
        }
    }
}

void Scena::addCadru(const std::string& elementNatural, const std::string& vreme, const std::string& momentZi)
{
    this->cadru.push_back(elementNatural);
    this->cadru.push_back(vreme);
    this->cadru.push_back(momentZi);

    std::string tempCadru = "";
    tempCadru += "Cadru: Este o ";
    tempCadru += vreme;
    tempCadru += " cu ";
    tempCadru += momentZi;
    tempCadru += ". Putem observa ";
    tempCadru += elementNatural;
    tempCadru += " \n";

    this->text.insert(this->text.begin(), tempCadru);
}

void Scena::addEfecteSpeciale(double gradCompatib, Producator producator)
{
    this->efecteSpeciale = producator.getEfect(gradCompatib, cadru[2]);
    std::string temp = "Efecte speciale: ";
    temp += this->efecteSpeciale;
    temp += "\n";

    this->text.insert(this->text.begin(), temp);
}

void Scena::setTip()
{
    if (this->text.front().at(0) == '-')
    {
        this->tip = "Scena dinamica";
    }
    else
    {
        this->tip = "Scena statica";
    }
}

void Scena::getAparitii()
{
    for (const auto& it : this->text)
    {
        // urmatorul if verifica daca token-ul curent este nume(personaj), in cazul pozitiv
        // o sa-l numere ca aparitie
        if (isupper(it.at(0)) != 0)
        {
            for (auto& i : this->personaje)
            {
                if (i.first.getNume() == it)
                {
                    i.second++;
                    break;
                }
            }
        }

        // verifica daca un cuvant de la inceut de propozitie este nume(personaj)
        if (ispunct(it.at(0)) != 0)
        {
            std::string tempWord = it;

            tempWord.erase(0, 1);

            for (auto& i : this->personaje)
            {
                if (i.first.getNume() == tempWord)
                {
                    i.second++;
                    break;
                }
            }
        }
    }
}

void Scena::printAparitii()
{
    for (const auto& i : this->personaje)
    {
        std::cout << i.first.getNume() << " " << i.second<<"\n";
    }
    std::cout << "\n\n";
}

double Scena::sumStariSpirit()
{
    double sum = 0.0;

    for (const auto& i : this->actori)
    {
        sum += i.getStareSpirit();
    }

    return sum;
}

void Scena::addNotareScena(int nrScena)
{
    std::string nr = std::to_string(nrScena);

    std::string temp = "* Scena ";
    temp += nr;
    temp += "* \n";

    this->text.insert(this->text.begin(), temp);
}

void Scena::reset()
{
    this->text.clear();
    this->tip = "";
    this->personaje.clear();
    this->actori.clear();
    this->cadru.clear();
}
