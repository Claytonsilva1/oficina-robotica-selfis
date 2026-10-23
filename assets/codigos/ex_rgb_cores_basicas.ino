/*
  Oficina de Robótica SELFÍS — Componente: LED RGB
  Exemplo: testar cada cor do LED RGB separadamente (útil para descobrir
  qual perna é qual). Mesma montagem da Prática 3.
  Ligações: pino 11 -> 220 ohms -> R | pino 10 -> 220 ohms -> G
            pino 9  -> 220 ohms -> B | perna comum (longa) -> GND
*/

const int PINO_R = 11;
const int PINO_G = 10;
const int PINO_B = 9;

void setup() {
  pinMode(PINO_R, OUTPUT);
  pinMode(PINO_G, OUTPUT);
  pinMode(PINO_B, OUTPUT);
}

void loop() {
  digitalWrite(PINO_R, HIGH); delay(1000); digitalWrite(PINO_R, LOW);  // vermelho
  digitalWrite(PINO_G, HIGH); delay(1000); digitalWrite(PINO_G, LOW);  // verde
  digitalWrite(PINO_B, HIGH); delay(1000); digitalWrite(PINO_B, LOW);  // azul

  // as três juntas: branco
  digitalWrite(PINO_R, HIGH); digitalWrite(PINO_G, HIGH); digitalWrite(PINO_B, HIGH);
  delay(1000);
  digitalWrite(PINO_R, LOW);  digitalWrite(PINO_G, LOW);  digitalWrite(PINO_B, LOW);
  delay(500);
}
