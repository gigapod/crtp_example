
#pragma once
// Define the SMS capabilites for a module.

// This is done using a template, that is then "added" to the module class

#include "crtp.h"

template <typename T> class UBXSms : public crtp<T, UBXSms>
{
  public:
    void sendSMSMessage(void)
    {
        ubxBase.sendMessage("SMS Message");
    }

    std::string getSMSMessage(void)
    {
        return ubxBase.getMessage();
    }
};