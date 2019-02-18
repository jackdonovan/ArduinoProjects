#include <Adafruit_CircuitPlayground.h>
#include <Keyboard.h>
#include <Mouse.h>

// This program is used for demonstration and educational purposes ONLY

void setup(){
    // start Keyboard driver
    Keyboard.begin()

}

void loop(){
    if(CircuitPlayground.leftButton())
    {
        delay(100);
        // open windows run
        Keyboard.press(KEY_LEFT_GUI);
        Keyboard.press('r');
        Keyboard.releaseAll();

        delay(100);
        // open command prompt as admin
        Keyboard.print("cmd");
        Keyboard.releaseAll();
        Keyboard.press(KEY_RETURN);
        Keyboard.releaseAll();
        delay(1000);

        // went to documents directory as to make the tree command run quicker for demonstration purposes
        Keyboard.print("cd Documents");
        Keyboard.releaseAll();
        delay(100);
        Keyboard.press(KEY_RETURN);
        delay(100);
        // im using tree for this command just for demonstration purposes, and because you could theoretically use any command you want
        Keyboard.print("tree");
        Keyboard.releaseAll();
        Keyboard.press(KEY_RETURN);
        Keyboard.releaseAll();
        delay(1500);


        // exit command window to make it sneaky
        Keyboard.print("exit");
        Keyboard.releaseAll();
        Keyboard.press(KEY_RETURN);


    }

    
}