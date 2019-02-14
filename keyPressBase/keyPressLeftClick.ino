#include <Adafruit_CircuitPlayground.h>
#include <Keyboard.h>
#include <Mouse.h>

void setup() {

    Mouse.begin();
}

void loop()
{
    if(CircuitPlayground.leftButton())
    {
        Mouse.click();
    }
}
