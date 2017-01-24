/*
   Programar: LEDS_sem_delay
   Autor: Joab Torres Alencar
   Curso: Tecnologo em Análise  e Desenvolvimento de Sistemas - Turma 2015
*/

//Pinos dos leds
int ledVerde = 8;
int ledVermelho = 9;

//Status dos leds
int ledVerdeStatus = LOW;
int ledVermelhoStatus = LOW;

//Tempo dos leds
unsigned long previoMillisVerde = 0;
unsigned long previoMillisVermelho = 0;

//Intervalo dos leds
int intervaloMillisVerde = 500;
int invervaloMillisVermelho = 3000;


/*
  Função: setup() - executa somente uma vez no projeto
*/
void setup() {
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}

/*
  Função: Loop() - Executa infinitamente no projeto desde que o arduino esteja ligado!
*/
void loop() {
  unsigned long millisAtualVerde = millis();
  if ((millisAtualVerde - previoMillisVerde) > intervaloMillisVerde) {
    previoMillisVerde = millisAtualVerde;

    if (ledVerdeStatus == LOW) {
      ledVerdeStatus = HIGH;
    } else {
      ledVerdeStatus = LOW;
    }
    digitalWrite(ledVerde, ledVerdeStatus);
  }
  /*****************************************************************************
                              FIM DO LED VERDE
   *****************************************************************************/
  unsigned long millisAtualVermelho = millis();

  if ((millisAtualVermelho - previoMillisVermelho) > invervaloMillisVermelho) {
    previoMillisVermelho = millisAtualVermelho;

    if (ledVermelhoStatus == LOW) {
      ledVermelhoStatus = HIGH;
    } else {
      ledVermelhoStatus = LOW;
    }

    digitalWrite(ledVermelho, ledVermelhoStatus);
  }
}
