int pinArray[] = {2, 3, 4, 5, 6, 7};
int count = 0;
int timer = 30;
//--------------------------------------------
void setup(){
  for (count=0;count<6;count++) {
    pinMode(pinArray[count], OUTPUT);
  }
}
//--------------------------------------------
void loop() {
  for (count=0;count<5;count++) {             // for each of the LEDs Left to right
    digitalWrite(pinArray[count], HIGH);      // turn on an led
    delay(timer);
    digitalWrite(pinArray[count + 1], HIGH);  // turn on it's neighbour
    delay(timer);
    digitalWrite(pinArray[count], LOW);       // turn off the LED
    delay(timer*2);
  }
for (count=5;count>0;count--) {               // for each of the LEDs right to Left 
    digitalWrite(pinArray[count], HIGH);      // turn on an led
    delay(timer);
    digitalWrite(pinArray[count - 1], HIGH);  // turn on it's neighbour
    delay(timer);
    digitalWrite(pinArray[count], LOW);       // turn off the LED
    delay(timer*2);
  }
}
