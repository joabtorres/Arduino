/*
   Programar: LCD_16x02
   Autor: Joab Torres Alencar
   Curso: Tecnologo em Análise  e Desenvolvimento de Sistemas - Turma 2015
*/

#include <LiquidCrystal.h>

//Define os pinos que serão utilizados para ligação ao display
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
/*
  Função: setup() - executa somente uma vez no projeto
*/
void setup() {
  //Define o número de colunas e linhas
  lcd.begin(16, 2);
}

/*
  Função: Loop() - Executa infinitamente no projeto desde que o arduino esteja ligado!
*/
void loop() {
  //limpa a tela
  lcd.clear();
  //terceira coluna da segunda linha
  lcd.setCursor(2,1);
  //Mensagem na tela
  lcd.print("Joab Torres");
  delay(2000);

  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("Curso - Turma");
  lcd.setCursor(1,1);
  lcd.print("TADS - 2015");
  delay(2000);

  lcd.clear();
  lcd.setCursor(0,0);
  for(int i = 0; i<13;i++){
    lcd.print(i);
    delay(500);
  }
}

