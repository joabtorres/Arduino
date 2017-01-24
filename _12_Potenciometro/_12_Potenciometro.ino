/*
   Programar: Potenciometro
   Autor: Joab Torres Alencar
   Curso: Tecnologo em Análise  e Desenvolvimento de Sistemas - Turma 2015
*/

#define PIN_POTENCIOMETRO A0

/*
  Função: setup() - executa somente uma vez no projeto
*/

void setup() {
  pinMode(PIN_POTENCIOMETRO, INPUT);
  Serial.begin(9600);
}

/*
  Função: Loop() - Executa infinitamente no projeto desde que o arduino esteja ligado!
*/
void loop() {
    Serial.println(analogRead(PIN_POTENCIOMETRO));
}

