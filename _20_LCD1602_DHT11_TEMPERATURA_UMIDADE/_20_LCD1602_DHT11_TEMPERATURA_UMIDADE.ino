/*
   Programar: LCD1602_DHT11_TEMPERATURA_UMIDADE
   Autor: Joab Torres Alencar
   Curso: Tecnologo em Análise  e Desenvolvimento de Sistemas - Turma 2015
*/
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#include <dht.h>
dht DHT;

#define PIN_DHT11 A0

int tempCelsius, umidade;

/*
  Função: setup() - executa somente uma vez no projeto
*/
void setup() {
  lcd.begin(16, 2);
}

/*
  Função: Loop() - Executa infinitamente no projeto desde que o arduino esteja ligado!
*/
void loop() {
  DHT.read11(PIN_DHT11);
  tempCelsius = DHT.temperature;
  umidade = DHT.humidity;

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("TEMP.: ");
  lcd.print(tempCelsius);
  lcd.print("*C");
  lcd.setCursor(0,1);
  lcd.print("UMI.: ");
  lcd.print(umidade);
  lcd.print("%");
  delay(1000);
}

