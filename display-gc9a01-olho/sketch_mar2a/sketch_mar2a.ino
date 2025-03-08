#include <Adafruit_GFX.h>
#include <Adafruit_GC9A01A.h>
#include <SPI.h>

// Definição dos pinos
#define TFT_CS     15   // Chip Select
#define TFT_RST    4    // Reset
#define TFT_DC     16   // Data/Command
#define TFT_CLK    18   // SPI Clock (SCK)
#define TFT_MISO   19   // SPI MISO (não utilizado neste exemplo)
#define TFT_MOSI   23   // SPI MOSI

// Inicializando o display GC9A01
Adafruit_GC9A01A tft = Adafruit_GC9A01A(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  // Inicia o display
  tft.begin();
  
  // Preenche o fundo com a cor preta
  tft.fillScreen(GC9A01A_BLACK);
  
  // Desenha o olho (círculo branco)
  tft.fillCircle(120, 120, 80, GC9A01A_RED);  // Olho - círculo branco
  
  // Desenha a íris (círculo azul)
  tft.fillCircle(120, 120, 60, GC9A01A_GREEN);   // Íris - círculo azul
  
  // Desenha a pupila (círculo preto)
  tft.fillCircle(120, 120, 30, GC9A01A_YELLOW);  // Pupila - círculo preto
}

void loop() {
  // Nada a fazer no loop
}
