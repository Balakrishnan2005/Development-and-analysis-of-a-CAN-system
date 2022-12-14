#include <CAN.h>

void setup() {

  Serial.begin(9600);
  while (!Serial);
  Serial.println("CAN Receiver");
  if (!CAN.begin(500E3)) {
    Serial.println("Starting CAN failed!");
    while (1);
  }
}

void loop() {
  int packetSize = CAN.parsePacket();

  if (packetSize) {
    Serial.print("Received ");
    Serial.print("packet with id 0x");
    Serial.print(CAN.packetId(), HEX);
    Serial.print(" and length ");
    Serial.println(packetSize);
    while (CAN.available()) 
    {
      Serial.print((char)CAN.read()); 
    }
      Serial.println();
    }
 }
