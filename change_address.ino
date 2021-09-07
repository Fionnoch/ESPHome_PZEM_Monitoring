#include <PZEM004Tv30.h>

PZEM004Tv30 pzem(6, 7);

void setup() {
  Serial.begin(9600);
}

uint8_t addr = 0x04; // The address you want to set the pzem to  

void loop() {
    Serial.print("setting address to ");
    Serial.println(addr);
    pzem.setAddress(addr);
    Serial.print("Current address:");
    Serial.println(pzem.getAddress());
    Serial.println();

    delay(1000);
}
