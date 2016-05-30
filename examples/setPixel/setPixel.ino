#include <Arduino_Nano_Play_Board.h>

Arduino_Nano_Play_Board board;

void setup() {
  // put your setup code here, to run once:

}

void loop() {

  for(int i = 0; i < 255; i++){
    board.setPixel(i, 0, 0);
    delay(10);
  }
  for(int i = 0; i < 255; i++){
    board.setPixel(0, i, 0);
    delay(10);
  }
  for(int i = 0; i < 255; i++){
    board.setPixel(0, 0, i);
    delay(10);
  }
  
  delay(1000);
}
