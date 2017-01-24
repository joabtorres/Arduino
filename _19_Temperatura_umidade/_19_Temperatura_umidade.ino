/*
   Programar: Temperatura_umidade
   Autor: Joab Torres Alencar
   Curso: Tecnologo em Análise  e Desenvolvimento de Sistemas - Turma 2015
*/

#include <dht.h>
#define PIN_DHT11 A0

dht DHT;

/*
  Função: setup() - executa somente uma vez no projeto
*/
void setup() {
  Serial.begin(9600);
}

/*
  Função: Loop() - Executa infinitamente no projeto desde que o arduino esteja ligado!
*/
void loop() {
  DHT.read11(PIN_DHT11);
  Serial.print("Umidade: ");
  Serial.print(DHT.humidity);
  Serial.print(" % ---- Temperatura : ");
  Serial.print(DHT.temperature);
  Serial.println("* Celsius ");
  delay(1000);
}

