const int numLEDs = 14;



 // Connect wires to to pins to 22-35 pin slots, Also to GND and 5V

int ledPins[numLEDs] = {22,23,24,25,26,27,28,29,30,31,32,33,34,35};

void setup() {
  
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {

  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(300); 
  }

  
  for (int i = numLEDs - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], LOW);
    delay(300);
  }

  
  delay(500); 
}











