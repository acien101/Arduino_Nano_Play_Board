/*
  Arduino Micro Play Board Library for programming Arduino Micro Play Board more easily.
  Created by Fran Acién 23 may 2016
  Released into th epublic domain
*/
#ifndef Arduino_Nano_Play_Board_h
#define Arduino_Nano_Play_Board_h

#include "Arduino.h"

class Arduino_Nano_Play_Board{
  public:
    Arduino_Nano_Play_Board();
    int getLightValue();
    int getPotentiometerValue();
    void setTone(uint8_t tone, unsigned char delayms);
    void setPixel(uint8_t red, uint8_t green, uint8_t blue);
  private:
    int _photoresistor;
    int _potentiometer;
    int _piezo;
    int _redPinRGB;
    int _greenPinRGB;
    int _bluePinRGB;
};

#endif
