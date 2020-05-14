#include <Arduino.h>
void configure(){
    Serial.begin(115200);
    delay(100);
    Serial.print("Serial Connection Established");
}