#include <Arduino_Nano_Play_Board.h>

Arduino_Nano_Play_Board board;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  Serial.println(board.getLightValue());
  delay(1000);
}
