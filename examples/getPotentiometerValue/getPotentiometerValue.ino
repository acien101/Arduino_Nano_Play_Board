#include <Arduino_Nano_Play_Board.h>

Arduino_Nano_Play_Board board;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  Serial.println(board.getPotentiometerValue());
  delay(1000);
}
