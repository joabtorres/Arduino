/*
   Programar: Potenciomentro_and_Led
   Autor: Joab Torres Alencar
   Curso: Tecnologo em Análise  e Desenvolvimento de Sistemas - Turma 2015
*/

#define PIN_LED 13
#define PIN_POTENCIOMETRO A0

int valorPot;
/*
  Função: setup() - executa somente uma vez no projeto
*/
void setup() {
  pinMode(PIN_POTENCIOMETRO, INPUT);
  pinMode(PIN_LED, OUTPUT);
}

/*
  Função: Loop() - Executa infinitamente no projeto desde que o arduino esteja ligado!
*/
void loop() {
  valorPot = map(analogRead(PIN_POTENCIOMETRO), 0, 1023, 0, 255);
  analogWrite(PIN_LED, valorPot);
}

