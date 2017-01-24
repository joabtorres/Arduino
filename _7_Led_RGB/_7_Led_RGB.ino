/*
   Programar: Led_RGB (Read Green Blue)
   Autor: Joab Torres Alencar
   Curso: Tecnologo em Análise  e Desenvolvimento de Sistemas - Turma 2015
*/
#define LedVermelho 8
#define LedVerde 9
#define LedAzul 10

/*
  Função: setup() - executa somente uma vez no projeto
*/
void setup() {
  pinMode(LedVermelho, OUTPUT);
  pinMode(LedVerde, OUTPUT);
  pinMode(LedAzul, OUTPUT);
}

/*
  Função: Loop() - Executa infinitamente no projeto desde que o arduino esteja ligado!
*/
void loop() {
  digitalWrite(LedVermelho, HIGH);
  delay(1000);
  digitalWrite(LedVermelho, LOW);

  digitalWrite(LedVerde, HIGH);
  delay(1000);
  digitalWrite(LedVerde, LOW);

  digitalWrite(LedAzul, HIGH);
  delay(1000);
  digitalWrite(LedAzul, LOW);

  digitalWrite(LedVermelho, HIGH);
  digitalWrite(LedVerde, HIGH);
  delay(500);
  digitalWrite(LedVermelho, LOW);
  digitalWrite(LedVerde, LOW);

  digitalWrite(LedVerde, HIGH);
  digitalWrite(LedAzul, HIGH);
  delay(500);
  digitalWrite(LedVerde, LOW);
  digitalWrite(LedAzul, LOW);

  digitalWrite(LedAzul, HIGH);
  digitalWrite(LedVermelho, HIGH);
  delay(500);
  digitalWrite(LedAzul, LOW);
  digitalWrite(LedVermelho, LOW);

  digitalWrite(LedAzul, HIGH);
  digitalWrite(LedVermelho, HIGH);
  digitalWrite(LedVerde, HIGH);
  delay(500);
  digitalWrite(LedAzul, LOW);
  digitalWrite(LedVermelho, LOW);
  digitalWrite(LedVerde, LOW);

}

