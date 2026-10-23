/*
  Oficina de Robótica SELFÍS — Desafio da Prática 3
  Gire o potenciômetro para escolher a cor do LED RGB (roda de cores).
  Montagem: a da Prática 3 + o potenciômetro da Prática 2 (5V, A0, GND).
*/
const int PINO_R = 11;
const int PINO_G = 10;
const int PINO_B = 9;
const int PINO_POT = A0;

void setup() {
  pinMode(PINO_R, OUTPUT);
  pinMode(PINO_G, OUTPUT);
  pinMode(PINO_B, OUTPUT);
}

void cor(int r, int g, int b) {
  analogWrite(PINO_R, r);
  analogWrite(PINO_G, g);
  analogWrite(PINO_B, b);
}

void loop() {
  // Divide o giro em 3 trechos de 256 passos: vermelho -> verde -> azul -> vermelho
  int h = map(analogRead(PINO_POT), 0, 1023, 0, 767);

  if (h < 256) {              // vermelho -> verde (passa pelo amarelo)
    cor(255 - h, h, 0);
  } else if (h < 512) {       // verde -> azul (passa pelo ciano)
    h = h - 256;
    cor(0, 255 - h, h);
  } else {                    // azul -> vermelho (passa pelo magenta)
    h = h - 512;
    cor(h, 0, 255 - h);
  }
  delay(20);
}
