/*
   Programar: Leds_sequencial
   Autor: Joab Torres Alencar
   Curso: Tecnologo em Análise  e Desenvolvimento de Sistemas - Turma 2015
*/

#define led_length 4
const int led[led_length] = {8, 9, 10, 11};
const int timer = 200;

/*
  Função: setup() - executa somente uma vez no projeto
*/
void setup() {
  for (int i = 0; i < led_length; i++) {
    pinMode(led[i], OUTPUT);
  }
}

/*
  Função: Loop() - Executa infinitamente no projeto desde que o arduino esteja ligado!
*/
void loop() {
  for (int contador = 0; contador < led_length ; contador++) {
    digitalWrite(led[contador], HIGH);
    delay(timer);
    digitalWrite(led[contador], LOW);
    delay(timer);
  }
}
