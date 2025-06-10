#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <Arduino.h>
#include "Model.hpp"
#include "Viewer.hpp"

#include "Motor.hpp"

class Controller {
  private:
    Model*  model;
    View*   view;
    Motor*  motor;
  public:
    Controller(Model* m, View* v) : model(m), view(v) {}

    // Process raw input string, update model, then refresh view
    void handleInput(const String& input) {
      // Example processing: trim whitespace and convert to uppercase
      String processed = input;
      processed.trim();
      processed.toUpperCase();
      model->setData(processed);

      view->display(*model);
      motor->status();
    }
};

#endif