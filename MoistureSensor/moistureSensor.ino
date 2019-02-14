#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>

void setup(){
  CircuitPlayground.begin();
  CircuitPlayground.setBrightness(128);
  CircuitPlayground.clearPixels();
  Serial.begin(57600);
  
  

}

void loop(){

  CircuitPlayground.clearPixels();
  CircuitPlayground.setBrightness(40);
  
  Serial.print("Moisture Sensor Value:");
  Serial.println(analogRead(A10));  
  int red;
  int green;
  int blue;
  
  //in water
  if(analogRead(A10) >= 700 )
  {
    red = 66;
    green = 113;
    blue = 244;
  }
  //in water
  if(analogRead(A10) >= 600 && analogRead(A10) < 700)
  {
    red = 66;
    green = 143;
    blue = 244;
  }

  //in humid soil conditions
  if(analogRead(A10) >= 500 && analogRead(A10) < 600)
  {
    red = 66;
    green = 235;
    blue = 244;
  }

  //in moist soil
  if(analogRead(A10) >= 400 && analogRead(A10) < 500)
  {
    red = 131;
    green = 66;
    blue = 244;
  }

  //in moist soil
  if(analogRead(A10) >= 300 && analogRead(A10) < 400)
  {
    red = 244;
    green = 66;
    blue = 167;
  }


  //if read, in dry soil
  if(analogRead(A10) >= 200 && analogRead(A10) < 300)
  {
    red = 244;
    green = 66;
    blue = 113;
  }
  //completely dry
  if(analogRead(A10) >= 0 && analogRead(A10) < 200)
  {
    red = 244;
    green = 66;
    blue = 66;
  }

  
  for (int pixel=0; pixel<10; pixel++) {
      CircuitPlayground.setPixelColor(pixel, red, green, blue);    
    }
  delay(1);
  
}