#include "application.h"

#ifndef RelayShield_h
#define RelayShield_h

class RelayShield {

 public:

  RelayShield();
  
  void
    begin(void),
    begin(int i),
    on(uint8_t i),
    off(uint8_t i),
    allOn(),
    allOff();
  bool
    isOn(uint8_t i);
 private:

};


#endif RelayShield_h