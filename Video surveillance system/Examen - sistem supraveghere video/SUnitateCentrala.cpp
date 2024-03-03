#include "SUnitateCentrala.h"

SUnitateCentrala* SUnitateCentrala::s_Instance = nullptr;

SUnitateCentrala* SUnitateCentrala::s_getInstance()
{
    if (s_Instance == nullptr)
    {
        s_Instance = new SUnitateCentrala();
    }

    return s_Instance;
}

void SUnitateCentrala::addNrFirma(const int newNr)
{
    SUnitateCentrala::nrFirme.push_back(newNr);
}

void SUnitateCentrala::addAlarma(const int newID, const std::string newProprietar, const std::string& filename)
{
    std::ifstream file(filename);

    std::string newParola;
    file >> newParola;

    int alegeFirma = rand() % 3;
    int alegere = 0;

    for (auto& i : SUnitateCentrala::nrFirme)
    {
        if (alegeFirma == alegere)
        {
            SAlarma* alarma = SAlarma::s_getInstance(newID, newProprietar, i, newParola);
            SUnitateCentrala::dispozitive.push_back(alarma);

            std::cout << "\tS-a creat alarma cu ID: "<< alarma->getID() <<"\n\n";

            return;
        }
        alegere++;
    }
}

void SUnitateCentrala::addCamera(const int newID, const std::string newProprietar, const int newRezolutie)
{
    IDispozitiv* newCamera = new CCameraVideo(newID, newProprietar, newRezolutie);

    SUnitateCentrala::dispozitive.push_back(newCamera);

    std::cout << "\tS-a creat o camera cu ID: "<< newCamera->getID() <<"\n\n";
}

void SUnitateCentrala::addSenzor(const int newID, const std::string& newProprietar, const int newDistanta)
{
    IDispozitiv* newSenzor = new CSenzor(newID, newProprietar, newDistanta);

    SUnitateCentrala::dispozitive.push_back(newSenzor);

    std::cout << "\tS-a creat un senzor cu ID: " << newSenzor->getID() << "\n\n";
}

void SUnitateCentrala::afiseazaMesaje()
{
    for (auto i : SUnitateCentrala::dispozitive)
    {
        i->print();
    }
}

void SUnitateCentrala::modFilmareCamere(const bool nightMode)
{
    for (auto i : SUnitateCentrala::dispozitive)
    {
        if (i->getDispozitiv() == "camera")
        {
            i->doJob(nightMode);
        }
    }
}

void SUnitateCentrala::activeazaSenzori()
{
    for (auto i : SUnitateCentrala::dispozitive)
    {
        if (i->getDispozitiv() == "senzor")
        {
            i->doJob(true);
        }
    }
}

void SUnitateCentrala::dezactiveazaSenzori()
{
    for (auto i : SUnitateCentrala::dispozitive)
    {
        if (i->getDispozitiv() == "senzor")
        {
            i->doJob(false);
        }
    }
}
