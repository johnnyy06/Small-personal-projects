#define _CRT_SECURE_NO_WARNINGS

#include "SStatieBaza.h"
#include <chrono>
#include <ctime>  

SStatieBaza* SStatieBaza::s_Instance = nullptr;

SStatieBaza* SStatieBaza::s_getInstance()
{
    if (s_Instance == nullptr)
    {
        s_Instance = new SStatieBaza();
    }

    std::cout << "\tS-a creat o statie de baza. Aceasta are rolul de a prelua mesajele si de a le stoca.\n\n";

    return s_Instance;
}

void SStatieBaza::stocheaza(CTichetAcces* newTichet, const std::string& newContinut, const std::string& newProprietar)
{
    if (newTichet->getTip() == "I")
    {
        IMesaj* newMesaj = new CInfo((*newTichet), newContinut, newProprietar);

        SStatieBaza::s_Instance->mesaje.push(newMesaj);

        std::cout << "\tMesajul s-a stocat cu succes!\n\n";
    }
    else
    {
        auto now = std::chrono::system_clock::now();
        std::time_t now_c = std::chrono::system_clock::to_time_t(now);

        std::string timeStr = std::ctime(&now_c);

        IMesaj* newMesaj = new CUpdate((*newTichet), newContinut, timeStr);

        SStatieBaza::s_Instance->mesaje.push(newMesaj);

        std::cout << "\tMesajul s-a stocat cu succes!\n\n";
    }
}