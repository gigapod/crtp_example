
#include "ubx_lara.h"
#include "ubx_sara.h"

UBXLara myLARA;
UBXSara mySARA;

void setup()
{
    Serial.begin(115200);
    while (!Serial)
        ;
    Serial.println("");
    Serial.printf("LARA Operations:\n\r");
    // SMS things
    myLARA.sendSMSMessage();
    Serial.printf("\tSMS Received message %s\n\r", myLARA.getSMSMessage().c_str());

    // Audio things
    myLARA.sendAudioMessage();
    Serial.printf("\tAudio Received message %s\n\r", myLARA.getAudioMessage().c_str());

    Serial.printf("\n\r");
    Serial.printf("SARA Operations:\n\r");
    // SMS things
    mySARA.sendSMSMessage();
    Serial.printf("\tSMS Received message %s\n\r", mySARA.getSMSMessage().c_str());

    // GNSS things
    mySARA.sendGNSSMessage();
    Serial.printf("\tGNSS Received message %s\n\r", mySARA.getGNSSMessage().c_str());
}

void loop()
{
}
