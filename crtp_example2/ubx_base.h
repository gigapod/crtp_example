
#pragma once

#include <Arduino.h>
#include <string>
// Base/communication class for the system

class UBXBase
{
    int _counter;

  public:
    UBXBase() : _counter{0}
    {
    }
    void sendMessage(const char *message)
    {
        Serial.printf("\t%s\n\r", message);
    }

    std::string getMessage(void)
    {
        char szBuffer[20];
        snprintf(szBuffer, sizeof(szBuffer), "message #%d", _counter++);
        return std::string(szBuffer);
    }
};