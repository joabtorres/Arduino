/*
   Programar: LDR_e_Led
   Autor: Joab Torres Alencar
   Curso: Tecnologo em Análise  e Desenvolvimento de Sistemas - Turma 2015
*/
#define LED 8
#define LDR A1
unsigned int valorLidoLDR;

/*
  Função: setup() - executa somente uma vez no projeto
*/
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(LDR, INPUT);
}

/*
  Função: Loop() - Executa infinitamente no projeto desde que o arduino esteja ligado!
*/
void loop() {
  valorLidoLDR = analogRead(LDR);

  if(valorLidoLDR >= 600){
    digitalWrite(LED, HIGH);
  }else{
    digitalWrite(LED,LOW);
  }
}

