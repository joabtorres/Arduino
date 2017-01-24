/*
   Programar: Servo_and_Potenciometro
   Autor: Joab Torres Alencar
   Curso: Tecnologo em Análise  e Desenvolvimento de Sistemas - Turma 2015
*/
#include <Servo.h>
#define PIN_SERVO 7
Servo myservo;

#define PIN_POTENCIOMETRO A0

unsigned int valor;
/*
  Função: setup() - executa somente uma vez no projeto
*/
void setup() {
  myservo.attach(PIN_SERVO);
  pinMode(PIN_POTENCIOMETRO, INPUT);
}

/*
  Função: Loop() - Executa infinitamente no projeto desde que o arduino esteja ligado!
*/
void loop() {
  valor = map(analogRead(PIN_POTENCIOMETRO), 0, 1023, 0, 180);
  myservo.write(valor);
  delay(15);
}

