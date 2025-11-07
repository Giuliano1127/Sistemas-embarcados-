#include <LiquidCrystal_I2C.h>// display via I2C
#include "DHTesp.h" //DHT22 

#define I2C_ADDR    0x27 // endereço LCD
#define LCD_COLUMNS 20
#define LCD_LINES   4


int pinosensor = 19;

//objetos
DHTesp dhtSensor;
LiquidCrystal_I2C lcd(I2C_ADDR, LCD_COLUMNS, LCD_LINES);

void setup() {
  Serial.begin(115200);
  lcd.init();
  lcd.backlight();
  dhtSensor.setup(pinosensor, DHTesp::DHT22); // configuração do pino para o sensor
}

void loop() {
  TempAndHumidity  data = dhtSensor.getTempAndHumidity();

  logserial(data);
  mostralcd(data);
}

void logserial(TempAndHumidity d){
  Serial.print("Temp:");
  Serial.print(d.temperature, 2);
  Serial.println("°C");
  Serial.println("Humid:");
  Serial.print(d.humidity,1);
  Serial.println("%");
}

void mostralcd(TempAndHumidity d){
  lcd.setCursor(0,0);
  lcd.print("Temp:");
  lcd.print(d.temperature, 2);
  lcd.print((char)223);
  lcd.print("C");
  lcd.setCursor(0,3);
  lcd.print("Humid:");
  lcd.print(d.humidity,1);
  lcd.print("%");
  delay(2000);
}
