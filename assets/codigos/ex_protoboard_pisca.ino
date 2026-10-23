/*
  Oficina de Robótica SELFÍS — Componente: Protoboard
  Exemplo: primeiro circuito na protoboard — um LED externo piscando.
  Ligações: pino 13 -> perna longa do LED | perna curta -> resistor 220 ohms -> GND
*/

const int PINO_LED = 13;

void setup() {
  pinMode(PINO_LED, OUTPUT);
}

void loop() {
  digitalWrite(PINO_LED, HIGH);  // LED aceso
  delay(500);
  digitalWrite(PINO_LED, LOW);   // LED apagado
  delay(500);
}
