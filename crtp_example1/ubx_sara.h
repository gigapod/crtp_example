
#pragma once
// Our SARA Module class

#include "ubx_base.h"
#include "ubx_gnss.h"
#include "ubx_sms.h"

// Decare our module definition - adding in the functionally it supports
class UBXSara : public UBXBase, public UBXGnss<UBXSara>, public UBXSms<UBXSara>
{
  public:
    const char *getName(void)
    {
        return "u-blox SARA Module";
    }
};