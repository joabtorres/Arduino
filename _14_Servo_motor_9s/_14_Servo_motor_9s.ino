/*
   Programar: Servo_motor_9s
   Autor: Joab Torres Alencar
   Curso: Tecnologo em Análise  e Desenvolvimento de Sistemas - Turma 2015
*/

#include <Servo.h>
#define PIN_SERVO 7

Servo myservo;
/*
  Função: setup() - executa somente uma vez no projeto
*/
void setup() {
  myservo.attach(PIN_SERVO); //Seleciona o digital do servo
  myservo.write(0); //POSIÇÃO 0
}

/*
  Função: Loop() - Executa infinitamente no projeto desde que o arduino esteja ligado!
*/
void loop() {
  
  //Girar 90º sentido horário
  for (int posicao = 0 ; posicao <= 90; posicao++) {
    myservo.write(posicao);
    delay(15);
  }
  
  delay(1000);
  
  //Girar 90º sentido anti-horário
  for (int posicao = 90 ; posicao >= 0; posicao--) {
    myservo.write(posicao);
    delay(15);
  }
}

