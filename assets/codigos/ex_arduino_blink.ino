/*
  Oficina de Robótica SELFÍS — Componente: Arduino Uno R3
  Exemplo: "Blink" — o primeiro programa de quem começa com Arduino.
  Não precisa montar nada: usa o LED "L" que já vem soldado na placa (pino 13).
*/

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);   // LED_BUILTIN é o pino 13 no Arduino Uno
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // acende o LED da placa
  delay(1000);                     // espera 1 segundo
  digitalWrite(LED_BUILTIN, LOW);  // apaga
  delay(1000);                     // espera 1 segundo
}
