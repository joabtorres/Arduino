/*
   Programar: Buzzer
   Autor: Joab Torres Alencar
   Curso: Tecnologo em Análise  e Desenvolvimento de Sistemas - Turma 2015
*/

#define PinBuzzer 8
/*
  Função: setup() - executa somente uma vez no projeto
*/
void setup() {
  pinMode(PinBuzzer, OUTPUT);
}

/*
  Função: Loop() - Executa infinitamente no projeto desde que o arduino esteja ligado!
*/
void loop() {
  tone(PinBuzzer, 1500, 800);
}

