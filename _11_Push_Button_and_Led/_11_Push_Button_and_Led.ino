/*
   Programar: Push_Button_and_Led
   Autor: Joab Torres Alencar
   Curso: Tecnologo em Análise  e Desenvolvimento de Sistemas - Turma 2015
*/

#define PIN_BUTTON 7

#define PIN_LED 13

/*
  Função: setup() - executa somente uma vez no projeto
*/
void setup() {
  pinMode(PIN_BUTTON, INPUT);
  pinMode(PIN_LED, OUTPUT);
}

/*
  Função: Loop() - Executa infinitamente no projeto desde que o arduino esteja ligado!
*/
void loop() {

  if (digitalRead(PIN_BUTTON)) {
    digitalWrite(PIN_LED, HIGH);
  } else {
    digitalWrite(PIN_LED, LOW);
  }

}

