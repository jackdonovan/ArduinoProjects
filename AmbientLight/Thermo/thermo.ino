#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>

float tempF;  

void setup() {
  CircuitPlayground.begin();
  CircuitPlayground.setBrightness(255);
  CircuitPlayground.clearPixels();


}
void loop() {

    CircuitPlayground.setBrightness(255);
    tempF = CircuitPlayground.temperatureF();
    Serial.print("  tempF: ");
    Serial.println(tempF);

    int red, blue, green;


    if(CircuitPlayground.slideSwitch()){
        //CircuitPlayground.setPixelColor(0, 255, 255, 255);
      if(tempF >= 66)
      {
        red = 66;
        green = 238;
        blue = 244;
      }
        
      if(tempF >= 67)
      {
        red = 66;
        green = 217;
        blue = 244;
      }

      if(tempF >= 68)
      {
        red = 66;
        green = 140;
        blue = 244;
      }
      if(tempF >= 69)
      {
        red = 66;
        green = 86;
        blue = 244;
      }
      if(tempF >= 70)
      {
        red = 140;
        green = 66;
        blue = 244;
      }
      if(tempF >= 71){
        red = 191;
        green = 66;
        blue = 244;
      }
      if(tempF >= 72){
        red = 244;
        green = 66;
        blue = 229;
      }
      if(tempF >= 73){
        red = 244;
        green = 66;
        blue = 167;
      }
      if(tempF >= 74){
        red = 244;
        green = 66;
        blue = 107;
      }
      if(tempF >= 75){
        red = 244;
        green = 66;
        blue = 66;
      }
    }
    else
    {
        red = random(1,255);
        green = random(1,255);
        blue = random(1,255);
    }


    for(int i = 0; i < 9; i++)
    {
        CircuitPlayground.setPixelColor(i, red, green, blue);
    }
    // CircuitPlayground.clearPixels();
    
    Serial.print("  tempF: ");
    Serial.println(tempF);
    delay(50000);
    
}
