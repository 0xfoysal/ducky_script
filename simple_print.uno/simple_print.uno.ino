#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
}


void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  
  // Type out this string letter by letter on the computer (assumes US-style
  // keyboard)
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);

  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(500);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("ping 8.8.8.8");
  DigiKeyboard.println("Loading ......20%");
  DigiKeyboard.delay(5000);
  DigiKeyboard.println("Loading .............40%");
  DigiKeyboard.delay(5000);
  DigiKeyboard.println("Loading ...................60%");
  DigiKeyboard.delay(5000);
  DigiKeyboard.println("Loading .........................80%");
  DigiKeyboard.delay(5000);
  DigiKeyboard.println("Loading ....................................100%");
  DigiKeyboard.delay(5000);
  DigiKeyboard.println("Hello you are have been hacked");
  
  for(;;){
    
    }
}
