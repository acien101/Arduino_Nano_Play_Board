#include "Arduino.h"
#include "Arduino_Nano_Play_Board.h"

Arduino_Nano_Play_Board::Arduino_Nano_Play_Board(){
  _photoresistor = 0;
  _potentiometer = 1;
  _piezo = 3;
  _redPinRGB = 9;
  _greenPinRGB = 10;
  _bluePinRGB = 11;
  //Set the digital pins to OUTPUT
  pinMode(_piezo, OUTPUT);
  pinMode(_redPinRGB, OUTPUT);
  pinMode(_greenPinRGB, OUTPUT);
  pinMode(_bluePinRGB, OUTPUT);
}

int Arduino_Nano_Play_Board::getLightValue(){
  return analogRead(_photoresistor);
}
int Arduino_Nano_Play_Board::getPotentiometerValue(){
  return analogRead(_potentiometer);
}
void Arduino_Nano_Play_Board::setTone(uint8_t tone, unsigned char delayms){
  analogWrite(_piezo, tone);     // Almost any value can be used except 0 and 255
  delay(delayms);             // wait for a delayms ms
  analogWrite(_piezo, 0);          // 0 turns it off
}
void Arduino_Nano_Play_Board::setPixel(uint8_t red, uint8_t green, uint8_t blue){
  analogWrite(_redPinRGB, red);
  analogWrite(_greenPinRGB, green);
  analogWrite(_bluePinRGB, blue);
}
