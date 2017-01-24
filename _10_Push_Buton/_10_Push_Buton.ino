/*
   Programar: Push_Buton
   Autor: Joab Torres Alencar
   Curso: Tecnologo em Análise  e Desenvolvimento de Sistemas - Turma 2015
*/

#define BUTTON 7


/*
  Função: setup() - executa somente uma vez no projeto
*/
void setup() {
  pinMode(BUTTON, INPUT);

  Serial.begin(9600);
}

/*
  Função: Loop() - Executa infinitamente no projeto desde que o arduino esteja ligado!
*/
void loop() {
  if (digitalRead(BUTTON)) {
    Serial.println(digitalRead(BUTTON)); //0
  } else {
    Serial.println(digitalRead(BUTTON)); //1
  }
}

