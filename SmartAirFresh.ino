// Includes
#include <LiquidCrystal.h>

// Pin configuration
const int led = 13;
const int button1 = 2;
const int button2 = 4;
const int button3 = 7;
const int lightSensor = 19;
const int motionSensor = 6;

//int motionState = 0;

// Initialize the library LCD with the numbers of the interface pins (using A0, A1, A2)
// Original setup: LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
LiquidCrystal lcd(12, 14, 16, 8, 15, 11);

void setup() {
  setPinModes();
  
  lcd.begin(16, 2);
}

void loop() { 
  
}

void setPinModes() {
  pinMode(led, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(lightSensor, INPUT);
  pinMode(motionSensor, INPUT);
}

