void setup(){
    //LED AMARELO PISCA .2S ALTERNADO COM VERMELHO PISCA .2S//
    pinMode(17, OUTPUT);
    pinMode(16, OUTPUT);  
  

}
  void loop(){
    digitalWrite(17, HIGH);
    delay(200);
    digitalWrite(17, LOW);
    delay(200);
    digitalWrite(16, HIGH);
    delay(200);
