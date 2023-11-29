

#pragma once
// Define the Audio capabilites for a module.

// This is done using a template, that is then "added" to the module class

template <typename T> class UBXAudio
{
  public:
    void sendAudioMessage(void)
    {
        static_cast<T *>(this)->sendMessage("Audio Message");
    }

    std::string getAudioMessage(void)
    {
        return static_cast<T *>(this)->getMessage();
    }
};