/*
   Programar: Ultrasonic_Buzzer
   Autor: Joab Torres Alencar
   Curso: Tecnologo em Análise  e Desenvolvimento de Sistemas - Turma 2015
*/

#include <Ultrasonic.h>

#define PIN_TRIGGER 6
#define PIN_ECHO 7

#define PIN_BUZZER 2

Ultrasonic ultrasonic(PIN_TRIGGER, PIN_ECHO);
/*
  Função: setup() - executa somente uma vez no projeto
*/
void setup() {
  pinMode(PIN_BUZZER, OUTPUT);
}

/*
  Função: Loop() - Executa infinitamente no projeto desde que o arduino esteja ligado!
*/
void loop() {
  float distanciaCM = ultrasonic.convert(ultrasonic.timing(), Ultrasonic::CM); //objeto.convert(Distancia em microsegundos, Base conversora[CM, IN])
   if (distanciaCM <= 30) {
    tone(PIN_BUZZER, 1500);
  }
  delay(500);
}

