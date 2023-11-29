
#pragma once
// Define the SMS capabilites for a module.

// This is done using a template, that is then "added" to the module class

template <typename T> class UBXSms
{
  public:
    void sendSMSMessage(void)
    {
        static_cast<T *>(this)->sendMessage("SMS Message");
    }

    std::string getSMSMessage(void)
    {
        return static_cast<T *>(this)->getMessage();
    }
};