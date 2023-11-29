
#pragma once
// Define the GNSS capabilites for a module.

// This is done using a template, that is then "added" to the module class

template <typename T> class UBXGnss
{
  public:
    void sendGNSSMessage(void)
    {
        static_cast<T *>(this)->sendMessage("GNSS Message");
    }

    std::string getGNSSMessage(void)
    {
        return static_cast<T *>(this)->getMessage();
    }
};