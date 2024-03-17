#include "Data.h"

std::ostream& operator<<(std::ostream& outStream, const Data& data)
{
    outStream << "Date: " << data.day << "." << data.month << "." << data.year << "  " << data.hour << ":" << data.minute << "\n";

    return outStream;
}