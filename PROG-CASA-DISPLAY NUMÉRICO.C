
  void setup(){
    //LED AMARELO PISCA .2S ALTERNADO COM VERMELHO PISCA .2S//
    //DISPLAY LED A=12,LED B=4,LED F=2,LED G=21,LED C=13,LED D=14,LED E=15//
    //CONTAGEM DO DISPLAY // 
    pinMode(17, OUTPUT);
    pinMode(16, OUTPUT);  
    pinMode(12, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(2, OUTPUT);  
    pinMode(21, OUTPUT);
    pinMode(13, OUTPUT);
    pinMode(14, OUTPUT);  
    pinMode(15, OUTPUT);
    pinMode(18, OUTPUT);

  

}
  void loop(){
    digitalWrite(17, HIGH);
    delay(200);
    digitalWrite(17, LOW);
    delay(200);
    digitalWrite(16, HIGH);
    delay(200);
    digitalWrite(16, LOW);
    delay(200);
    //DISPLAY LED A=12,LED B=4,LED F=2,LED G=21,LED C=13,LED D=14,LED E=15//
    digitalWrite(12, HIGH);    
    digitalWrite(4, HIGH);    
    digitalWrite(2, HIGH);    
    digitalWrite(21, LOW);    
    digitalWrite(13, HIGH);    
    digitalWrite(14, HIGH);    
    digitalWrite(15, HIGH);
    delay(1500);
    //DISPLAY LED A=12,LED B=4,LED F=2,LED G=21,LED C=13,LED D=14,LED E=15//
    digitalWrite(12, LOW);    
    digitalWrite(4, HIGH);    
    digitalWrite(2, LOW);    
    digitalWrite(21, LOW);    
    digitalWrite(13, HIGH);    
    digitalWrite(14, LOW);    
    digitalWrite(15, LOW);
    delay(1500);
    //DISPLAY LED A=12,LED B=4,LED F=2,LED G=21,LED C=13,LED D=14,LED E=15//
    digitalWrite(12, HIGH);    
    digitalWrite(4, HIGH);    
    digitalWrite(2, LOW);    
    digitalWrite(21, HIGH);    
    digitalWrite(13, LOW);    
    digitalWrite(14, HIGH);    
    digitalWrite(15, HIGH);
    delay(1500);
    //DISPLAY LED A=12,LED B=4,LED F=2,LED G=21,LED C=13,LED D=14,LED E=15//
    digitalWrite(12, HIGH);    
    digitalWrite(4, HIGH);    
    digitalWrite(2, LOW);    
    digitalWrite(21, HIGH);    
    digitalWrite(13, HIGH);    
    digitalWrite(14, HIGH);    
    digitalWrite(15, LOW);
    delay(1500);
    //DISPLAY LED A=12,LED B=4,LED F=2,LED G=21,LED C=13,LED D=14,LED E=15//
    digitalWrite(12, LOW);    
    digitalWrite(4, HIGH);    
    digitalWrite(2, HIGH);    
    digitalWrite(21, HIGH);    
    digitalWrite(13, HIGH);    
    digitalWrite(14, LOW);    
    digitalWrite(15, LOW);
    delay(1500);
    //DISPLAY LED A=12,LED B=4,LED F=2,LED G=21,LED C=13,LED D=14,LED E=15//
    digitalWrite(12, HIGH);    
    digitalWrite(4, LOW);    
    digitalWrite(2, HIGH);    
    digitalWrite(21, HIGH);    
    digitalWrite(13, HIGH);    
    digitalWrite(14, HIGH);    
    digitalWrite(15, LOW);
    delay(1500);
    //DISPLAY LED A=12,LED B=4,LED F=2,LED G=21,LED C=13,LED D=14,LED E=15//
    digitalWrite(12, HIGH);    
    digitalWrite(4, LOW);    
    digitalWrite(2, HIGH);    
    digitalWrite(21, HIGH);    
    digitalWrite(13, HIGH);    
    digitalWrite(14, HIGH);    
    digitalWrite(15, HIGH);
    delay(1500);
    //DISPLAY LED A=12,LED B=4,LED F=2,LED G=21,LED C=13,LED D=14,LED E=15//
    digitalWrite(12, HIGH);    
    digitalWrite(4, HIGH);    
    digitalWrite(2, LOW);    
    digitalWrite(21, LOW);    
    digitalWrite(13, HIGH);    
    digitalWrite(14, LOW);    
    digitalWrite(15, LOW);
    delay(1500);
    //DISPLAY LED A=12,LED B=4,LED F=2,LED G=21,LED C=13,LED D=14,LED E=15//
    digitalWrite(12, HIGH);    
    digitalWrite(4, HIGH);    
    digitalWrite(2, HIGH);    
    digitalWrite(21, HIGH);    
    digitalWrite(13, HIGH);    
    digitalWrite(14, HIGH);    
    digitalWrite(15, HIGH);
    delay(1500);
    //DISPLAY LED A=12,LED B=4,LED F=2,LED G=21,LED C=13,LED D=14,LED E=15//
    digitalWrite(12, HIGH);    
    digitalWrite(4, HIGH);    
    digitalWrite(2, HIGH);    
    digitalWrite(21, HIGH);    
    digitalWrite(13, HIGH);    
    digitalWrite(14, HIGH);    
    digitalWrite(15, LOW);
    delay(1500);
    //DISPLAY LED A=12,LED B=4,LED F=2,LED G=21,LED C=13,LED D=14,LED E=15//
    digitalWrite(12, LOW);    
    digitalWrite(4, LOW);    
    digitalWrite(2, LOW);    
    digitalWrite(21, LOW);    
    digitalWrite(13, LOW);    
    digitalWrite(14, LOW);    
    digitalWrite(15, LOW);
    digitalWrite(18, HIGH);    
    delay(1500);
    digitalWrite(18, LOW);    
    delay(1500);
    
 
