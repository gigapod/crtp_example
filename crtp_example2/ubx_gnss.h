
#pragma once
// Define the GNSS capabilites for a module.

// This is done using a template, that is then "added" to the module class
#include "crtp.h"

template <typename T> class UBXGnss : public crtp<T, UBXGnss>
{
  public:
    void sendGNSSMessage(void)
    {
        ubxBase.sendMessage("GNSS Message");
    }

    std::string getGNSSMessage(void)
    {
        return ubxBase.getMessage();
    }
};