
#pragma once
// Our LARA Module class

#include "ubx_audio.h"
#include "ubx_base.h"
#include "ubx_sms.h"

// Decare our module definition - adding in the functionally it supports
class UBXLara : public UBXBase, public UBXAudio<UBXLara>, public UBXSms<UBXLara>
{
  public:
    const char *getName(void)
    {
        return "u-blox LARA Module";
    }
};