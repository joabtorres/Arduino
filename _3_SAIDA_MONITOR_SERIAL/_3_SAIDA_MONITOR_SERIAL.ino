/*
 * Programar: SAIDA_MONITOR_SERIAL
 * Autor: Joab Torres Alencar
 * Curso: Tecnologo em Análise  e Desenvolvimento de Sistemas - Turma 2015
*/

/*
  Função: setup() - executa somente uma vez no projeto
*/
void setup(){
  Serial.begin(9600);
}

/*
  Função: Loop() - Executa infinitamente no projeto desde que o arduino esteja ligado!
*/
void loop(){
 Serial.println("Saida digital !");
 delay(1000);
}
