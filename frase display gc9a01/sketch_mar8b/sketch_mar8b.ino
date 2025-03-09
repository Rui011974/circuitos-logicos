#include <Adafruit_GFX.h>    // Biblioteca para gráficos
#include <Adafruit_GC9A01A.h> // Biblioteca para o display GC9A01

// Definindo os pinos do ESP32
#define TFT_CS     15  // Chip Select
#define TFT_RST    4   // Reset
#define TFT_DC     16  // Data/Command
#define TFT_CLK    18  // SPI Clock (SCK)
#define TFT_MISO   19  // SPI MISO (não utilizado neste exemplo)
#define TFT_MOSI   23  // SPI MOSI

// Inicializando o display GC9A01
Adafruit_GC9A01A tft = Adafruit_GC9A01A(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  // Inicia o display
  tft.begin();
  
  // Preenche o fundo com a cor preta
  tft.fillScreen(GC9A01A_BLACK);

  // Define a cor do texto (branco)
  tft.setTextColor(GC9A01A_ORANGE);

  // Define o tamanho do texto
  tft.setTextSize(3);  // Tamanho 2 para uma boa visibilidade

  // Exibe a frase na posição (30, 100) da tela
    tft.setCursor(60, 80);
  tft.println("tecnico"); 
  tft.setCursor(40, 120);
  tft.print("eletronica");
  delay(2000);
    // Apaga o display (desliga a tela)
  tft.fillScreen(GC9A01A_BLACK);
  tft.setCursor(50, 80);
  tft.println("automacao");      
  tft.setCursor(20, 120);
  tft.println("computadores");    
  delay(2000);


}

void loop() {
   tft.setCursor(60, 80);
  tft.println("tecnico"); 
  tft.setCursor(40, 120);
  tft.print("eletronica");
  delay(2000);
    // Apaga o display (desliga a tela)
  tft.fillScreen(GC9A01A_BLACK);
  tft.setCursor(50, 80);
  tft.println("automacao");      
  tft.setCursor(20, 120);
  tft.println("computadores");    
  delay(2000);
   // Apaga o display (desliga a tela)
  tft.fillScreen(GC9A01A_BLACK);




}