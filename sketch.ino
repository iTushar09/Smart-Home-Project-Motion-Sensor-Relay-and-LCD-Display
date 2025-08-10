#include <LiquidCrystal_I2C.h> // Library to control the LCD with I2C interface

// Create an LCD object with I2C address 0x27 and a display size of 16 columns x 2 rows
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Define pin numbers for the PIR motion sensor and relay
#define PIRpin 12     // PIR motion sensor output connected to GPIO 12
#define relaypin 15   // Relay control pin connected to GPIO 15

void setup() {
  // Setup the PIR sensor pin as INPUT and Relay pin as OUTPUT
  pinMode(PIRpin, INPUT);
  pinMode(relaypin, OUTPUT);

  // Initialize the LCD display
  lcd.init();       // Start LCD
  lcd.backlight();  // Turn on the LCD backlight
}

void loop() {
  // Read the PIR sensor value (HIGH = motion detected, LOW = no motion)
  int PIRvalue = digitalRead(PIRpin);

  if (PIRvalue == HIGH) {  // If motion is detected
    digitalWrite(relaypin, HIGH); // Turn ON the relay (and connected device)

    lcd.clear();                 // Clear the display
    lcd.setCursor(0, 0);          // Move cursor to first column, first row
    lcd.print("PIR value =");     // Display text
    delay(900);
    lcd.setCursor(12, 0);         // Move to column 12 for showing PIR reading
    lcd.print(PIRvalue);          // Show 1 since motion detected
    lcd.setCursor(0, 1);          // Move to second row
    lcd.print("Relay ON");        // Show relay status
    delay(700);
  }
  else { // No motion detected
    digitalWrite(relaypin, LOW);  // Turn OFF the relay

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("PIR value =");
    delay(900);
    lcd.setCursor(12, 0);
    lcd.print(PIRvalue);          // Show 0 since no motion
    lcd.setCursor(0, 1);
    lcd.print("Relay OFF");       // Show relay status
    delay(700);
  }
}
