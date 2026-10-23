/*
  Oficina de Robótica SELFÍS — Prática 3: Mistura de cores com LED RGB
  Placa: Arduino Uno R3
  Ligações: perna R -> resistor 220 ohms -> pino 11
            perna G -> resistor 220 ohms -> pino 10
            perna B -> resistor 220 ohms -> pino 9
            perna comum (a mais longa) -> GND  (LED de CÁTODO comum)
*/

const int PINO_R = 11;
const int PINO_G = 10;
const int PINO_B = 9;

// Se o seu LED for de ÂNODO comum (perna longa no 5V), troque false por true
const bool ANODO_COMUM = false;

void setup() {
  pinMode(PINO_R, OUTPUT);
  pinMode(PINO_G, OUTPUT);
  pinMode(PINO_B, OUTPUT);
}

// Função que acende o LED com uma mistura de vermelho, verde e azul (0 a 255 cada)
void cor(int r, int g, int b) {
  if (ANODO_COMUM) {       // no ânodo comum a lógica é invertida
    r = 255 - r;
    g = 255 - g;
    b = 255 - b;
  }
  analogWrite(PINO_R, r);
  analogWrite(PINO_G, g);
  analogWrite(PINO_B, b);
}

void loop() {
  // Cores primárias da luz
  cor(255, 0, 0);     delay(1000);   // vermelho
  cor(0, 255, 0);     delay(1000);   // verde
  cor(0, 0, 255);     delay(1000);   // azul

  // Cores secundárias (soma de duas primárias)
  cor(255, 255, 0);   delay(1000);   // amarelo  = R + G
  cor(0, 255, 255);   delay(1000);   // ciano    = G + B
  cor(255, 0, 255);   delay(1000);   // magenta  = R + B

  // Todas juntas
  cor(255, 255, 255); delay(1000);   // branco   = R + G + B

  // Transição suave: do vermelho para o azul
  for (int i = 0; i <= 255; i++) {
    cor(255 - i, 0, i);
    delay(8);
  }
  cor(0, 0, 0);       delay(500);    // apagado
}
