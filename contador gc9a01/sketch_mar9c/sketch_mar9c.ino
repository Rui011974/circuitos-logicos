#include <Adafruit_GFX.h>    // Biblioteca gráfica para gráficos
#include <Adafruit_GC9A01A.h> // Biblioteca específica para o display GC9A01

// Definindo os pinos do ESP32
#define TFT_CS     15  // Chip Select
#define TFT_RST    4   // Reset
#define TFT_DC     16  // Data/Command
#define TFT_CLK    18  // SPI Clock (SCK)
#define TFT_MISO   19  // SPI MISO (não utilizado neste exemplo)
#define TFT_MOSI   23  // SPI MOSI

// Inicializando o display GC9A01
Adafruit_GC9A01A tft = Adafruit_GC9A01A(TFT_CS, TFT_DC, TFT_RST);

// Variável para o contador
int contador = 0;

void setup() {
  // Inicia o display
  tft.begin();
  
  // Preenche a tela com a cor preta
  tft.fillScreen(GC9A01A_BLACK);

  // Define o tamanho do texto
  tft.setTextSize(10);

  // Define a cor do texto (branco)
  tft.setTextColor(GC9A01A_WHITE);

  // Centraliza a tela para o contador
  tft.setCursor(100, 100);
}

void loop() {
  // Limpa o display
  tft.fillScreen(GC9A01A_BLACK);

  // Exibe o contador no display
  tft.setCursor(100, 100);  // Define a posição do texto
  tft.print(contador);      // Exibe o número do contador

  // Incrementa o contador
  contador++;

  // Se o contador chegar a 100, ele volta a 0
  if (contador >= 100) {
    contador = 0;
  }

  // Espera 1 segundo antes de atualizar
  delay(1000);
}
