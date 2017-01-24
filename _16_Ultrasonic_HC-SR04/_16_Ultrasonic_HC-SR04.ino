/*
   Programar: Ultrasonic_HC-SR04
   Autor: Joab Torres Alencar
   Curso: Tecnologo em Análise  e Desenvolvimento de Sistemas - Turma 2015
*/

#include <Ultrasonic.h>

#define PIN_TRIGGER 6
#define PIN_ECHO 7

Ultrasonic ultrasonic(PIN_TRIGGER, PIN_ECHO);
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
  float distanciaCM = ultrasonic.convert(ultrasonic.timing(), Ultrasonic::CM); //objeto.convert(Distancia em microsegundos, Base conversora[CM, IN])
  Serial.print(distanciaCM);
  Serial.println("CM");
  delay(100);
}

