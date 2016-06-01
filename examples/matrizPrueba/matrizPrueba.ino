//**************************************************************//
//  Name    : shiftOutCode, Hello World                                
//  Author  : Carlyn Maw,Tom Igoe, David A. Mellis 
//  Date    : 25 Oct, 2006    
//  Modified: 23 Mar 2010                                 
//  Version : 2.0                                             
//  Notes   : Code for using a 74HC595 Shift Register           //
//          : to count from 0 to 255                           
//****************************************************************

//Pin connected to ST_CP of 74HC595
int latchPin = A7;
//Pin connected to SH_CP of 74HC595
int clockPin = 12;
////Pin connected to DS of 74HC595
int dataPin = 13;

int col[] = {2, 4, 5, 16, 17};

void setup() {
  //set pins to output so you can control the shift register
  pinMode(A7, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);

  for(int i = 0; i < 5; i++){
    pinMode(col[i], OUTPUT);
    digitalWrite(col[i], HIGH);
  }
}

void loop() {
  // count from 0 to 255 and display the number 
  // on the LEDs
  for (int numberToDisplay = 0; numberToDisplay < 256; numberToDisplay++) {
    // take the latchPin low so 
    // the LEDs don't change while you're sending in bits:
    digitalWrite(col[0], LOW);
    digitalWrite(A7, LOW);
    // shift out the bits:
    shiftOut(dataPin, clockPin, MSBFIRST, numberToDisplay);  

    //take the latch pin high so the LEDs will light up:
    digitalWrite(A7, HIGH);
    digitalWrite(col[0], HIGH);
    // pause before next value:
    delay(500);
  }
}
