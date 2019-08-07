//Projeto de sinal de transito no Arduiono
//por Tobias Pedro Eustáquio T4


void setup (){
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop(){
  //controle do led verde
  digitalWrite(8,HIGH);  //acende o led
  delay(5000);           // espera 5 segundos
  digitalWrite(8,LOW);   //apaga o led
  
  //controle do led amarelo
  digitalWrite(9,HIGH);  //acende o led
  delay(2000);           //espera 2 segundos
  digitalWrite(9,LOW);   // apaga o led
  
  //controle do led vermelho
  digitalWrite(10,HIGH); //acende o led
  delay(5000);           //espera 5 segundos
  digitalWrite(10,LOW);  //apaga o led
}
