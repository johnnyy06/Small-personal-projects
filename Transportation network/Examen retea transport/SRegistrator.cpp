#include "SRegistrator.h"

SRegistrator* SRegistrator::s_Instance = nullptr;

SRegistrator* SRegistrator::s_getInstance(const int newRID)
{
    if (s_Instance == nullptr)
    {
        s_Instance = new SRegistrator(newRID);
    }

    std::cout << "\tS-a creat un registrator. Acesta are rolul de a genera si oferi certificate de inregistrare.\tRID: " << SRegistrator::s_Instance->RID << "\n\n";

    return s_Instance;
}

CCertificatInregistrare SRegistrator::giveCertificatInregistrare(const CCerereInregistrare& cerere)
{
    return CCertificatInregistrare(cerere, RID);
}

SRegistrator::~SRegistrator()
{
    if (s_Instance != nullptr)
    {
        delete s_Instance;
        s_Instance = nullptr;
    }
}
