int totalseconds = 0;
int totalminutes = totalseconds/60;
LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup() { 
  lcd_1.begin(16, 2); }

// Print a message to the LCD. lcd_1.print("12:00"); }

void loop() {
  int totalminutes = totalseconds/60;
  int minutes = totalminutes % 60; 
  int tensminutes = minutes /10;
  int onesminutes = minutes - (10 * tensminutes);
  int seconds = totalseconds % 60; 
  int tensseconds = seconds/10;
  int onesseconds = seconds  - (10 * tensseconds);
  lcd_1.setCursor(1, 0);
  lcd_1.print(tensminutes);
  lcd_1.setCursor(2, 0);
  lcd_1.print(onesminutes);
  lcd_1.setCursor(3, 0);
  lcd_1.print(":");
  lcd_1.setCursor(4, 0);
  lcd_1.print(tensseconds);
  lcd_1.setCursor(5, 0);
  lcd_1.print(onesseconds);

delay(1); totalseconds += 1;
}
