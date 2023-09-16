#include <WiFi.h>
void setup() {
    Serial.begin(115200);
    delay(1000);

    // Get the MAC address of the ESP32
    uint8_t mac[6];
    WiFi.macAddress(mac);

    // Print the MAC address
    Serial.print("MAC Address: ");
    for (int i = 0; i < 6; i++) {
        Serial.print(mac[i], HEX);
        if (i < 5) {
            Serial.print(":");
        }
    }
    Serial.println();
}
void loop(){
  
}
