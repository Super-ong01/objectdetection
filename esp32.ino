#include <BluetoothSerial.h>

BluetoothSerial SerialBT;

void setup() {
    Serial.begin(115200);
    SerialBT.begin("ESP32");  // Name of your ESP32 Bluetooth device
}

void loop() {
    if (SerialBT.available()) {
        char incomingChar = SerialBT.read();
        Serial.print("Received: ");
        Serial.println(incomingChar);
    }
}
