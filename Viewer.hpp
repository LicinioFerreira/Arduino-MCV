#ifndef VIEWER_H
#define VIEWER_H



#include <Arduino.h>
#include "Model.hpp"

class View {
  public:
    void display(const Model& model) {
      Serial.print(F("Current Model Data: "));
      Serial.println(model.getData());
    }
};


#endif