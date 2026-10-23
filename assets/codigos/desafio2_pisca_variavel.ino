/*
  Oficina de Robótica SELFÍS — Desafio da Prática 2
  O potenciômetro controla a VELOCIDADE com que o LED pisca.
  Mesma montagem da Prática 2.
*/
const int PINO_POT = A0;
const int PINO_LED = 11;

void setup() {
  pinMode(PINO_LED, OUTPUT);
}

void loop() {
  int leitura = analogRead(PINO_POT);            // 0 a 1023
  int tempo = map(leitura, 0, 1023, 50, 1000);   // 50 ms (rápido) a 1000 ms (lento)

  digitalWrite(PINO_LED, HIGH);
  delay(tempo);
  digitalWrite(PINO_LED, LOW);
  delay(tempo);
}
