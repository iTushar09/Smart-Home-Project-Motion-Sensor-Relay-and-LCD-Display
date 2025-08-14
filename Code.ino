#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

#define PIRpin 12
#define relaypin 15

void setup() {
  pinMode(PIRpin, INPUT);
  pinMode(relaypin, OUTPUT);
  
  lcd.init();
  lcd.backlight();
  
  // Display welcome message once
  lcd.setCursor(0, 0);
  lcd.print("WELCOME TO MY");
  lcd.setCursor(0, 1);
  lcd.print("PROJECT");
  delay(2000);
  lcd.clear();
}

void loop() {
  int PIRvalue = digitalRead(PIRpin);
  
  if (PIRvalue == HIGH) {
    digitalWrite(relaypin, HIGH);
    
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Motion Detected!");
    lcd.setCursor(0, 1);
    lcd.print("Relay: ON");
    
  } else {
    digitalWrite(relaypin, LOW);
    
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("No Motion");
    lcd.setCursor(0, 1);
    lcd.print("Relay: OFF");
  }
  
  delay(500); // Reduced delay for better responsiveness
}
