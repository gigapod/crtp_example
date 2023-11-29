

#pragma once
// Define the Audio capabilites for a module.

// This is done using a template, that is then "added" to the module class

#include "crtp.h"

template <typename T> class UBXAudio : public crtp<T, UBXAudio>
{
  public:
    void sendAudioMessage(void)
    {
        ubxBase.sendMessage("Audio Message");
    }

    std::string getAudioMessage(void)
    {
        return ubxBase.getMessage();
    }
};