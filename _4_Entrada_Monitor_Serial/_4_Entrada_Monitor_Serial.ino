/*
   Programar: Entrada_Monitor_Serial
   Autor: Joab Torres Alencar
   Curso: Tecnologo em Análise  e Desenvolvimento de Sistemas - Turma 2015
*/

/*
  Função: setup() - executa somente uma vez no projeto
*/
void setup() {
  Serial.begin(9600);
}

/*
  Função: Loop() - Executa infinitamente no projeto desde que o arduino esteja ligado!
*/
void loop() {
  char c = Serial.read();
  if (c == 'a') {
    Serial.println(c);
  }
  if (c == 'b') {
    Serial.println(c);
  }
}
