#include <Arduino.h>
#include "Model.hpp"
#include "Viewer.hpp"
#include "Controller.hpp"

#include "stdlib.h"

void received();


// Instantiate MVC components
Model model;
View view;
Controller controller(&model, &view);

void setup() {
  Serial.begin(9600);
  while (!Serial) { /* wait for Serial to be ready */ }
  Serial.println(F("MVC Ready. Type a string and hit enter:"));
}

void loop() {
  // Check if a full line is available over Serial
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');
    controller.handleInput(input);
  }
}


void received() {

    Serial.println("Enter data:");
    while (Serial.available() == 0) {}           //wait for data available
        String teststr = Serial.readString();    //read until timeout
        teststr.trim();                          // remove any \r \n whitespace at the end of the String
        if (teststr == "red") {
            Serial.println("A primary color");
        } else {
            Serial.println("Something else");
        }
    
    delay(100);
    Serial.flush();
    Serial.clearWriteError();

}

