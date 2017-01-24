/*
 * Programar: ACENDENDO LED DO ARDUINO
 * Autor: Joab Torres Alencar
 * Curso: Tecnologo em Análise  e Desenvolvimento de Sistemas - Turma 2015
*/
#define LED 13

/*
  Função: setup() - executa somente uma vez no projeto
*/
void setup(){
  pinMode(LED, OUTPUT); //COMANDO DE SAIDA
}

/*
  Função: Loop() - Executa infinitamente no projeto desde que o arduino esteja ligado!
*/
void loop(){
  digitalWrite(LED, HIGH);

}

