#ifndef MODEL_H
#define MODEL_H

#include <Arduino.h>

class Model {
  private:
    String data;
  public:
    Model() : data("") {}
    void setData(const String& newData) {
      data = newData;
    }
    String getData() const {
      return data;
    }
};

#endif