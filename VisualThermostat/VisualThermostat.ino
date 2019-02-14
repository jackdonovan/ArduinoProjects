#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>

float tempF;  

void setup() {
  CircuitPlayground.begin();
  CircuitPlayground.setBrightness(128);
  CircuitPlayground.clearPixels();


}
void loop() {
  // put your main code here, to run repeatedly:
    CircuitPlayground.clearPixels();
    CircuitPlayground.setBrightness(150);
    tempF = CircuitPlayground.temperatureF();
    Serial.print("  tempF: ");
    Serial.println(tempF);
    if(CircuitPlayground.slideSwitch()){
        //CircuitPlayground.setPixelColor(0, 255, 255, 255);
      if(tempF >= 66){
        CircuitPlayground.setPixelColor(0, 66, 238, 244);
      }
      if(tempF >= 67){
        CircuitPlayground.setPixelColor(1, 66, 217, 244);
      }
      if(tempF >= 68){
        CircuitPlayground.setPixelColor(2, 66, 140, 244);
      }
      if(tempF >= 69){
        CircuitPlayground.setPixelColor(3, 66, 86, 244);
      }
      if(tempF >= 70){
        CircuitPlayground.setPixelColor(4, 140, 66, 244);
      }
      if(tempF >= 71){
        CircuitPlayground.setPixelColor(5, 191, 66, 244);
      }
      if(tempF >= 72){
        CircuitPlayground.setPixelColor(6, 244, 66, 229);
      }
      if(tempF >= 73){
        CircuitPlayground.setPixelColor(7, 244, 66, 167);
      }
      if(tempF >= 74){
        CircuitPlayground.setPixelColor(8, 244, 66, 107);
      }
      if(tempF >= 75){
        CircuitPlayground.setPixelColor(9, 244, 66, 66);
      }
    }
    delay(500);
    
}
