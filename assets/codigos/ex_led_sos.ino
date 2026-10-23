/*
  Oficina de Robótica SELFÍS — Componente: LED
  Exemplo: o LED transmite "SOS" em código Morse ( . . .  - - -  . . . )
  Ligações: pino 13 -> perna longa do LED | perna curta -> resistor 220 ohms -> GND
*/

const int PINO_LED = 13;
const int PONTO = 200;      // duração de um ponto, em ms
const int TRACO = 600;      // um traço vale 3 pontos

void setup() {
  pinMode(PINO_LED, OUTPUT);
}

// Acende o LED por um tempo e depois faz uma pausa curta
void sinal(int duracao) {
  digitalWrite(PINO_LED, HIGH);
  delay(duracao);
  digitalWrite(PINO_LED, LOW);
  delay(PONTO);
}

void loop() {
  for (int i = 0; i < 3; i++) sinal(PONTO);   // S = . . .
  delay(TRACO);
  for (int i = 0; i < 3; i++) sinal(TRACO);   // O = - - -
  delay(TRACO);
  for (int i = 0; i < 3; i++) sinal(PONTO);   // S = . . .
  delay(2000);                                // pausa antes de repetir
}
