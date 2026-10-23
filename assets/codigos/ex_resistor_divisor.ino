/*
  Oficina de Robótica SELFÍS — Componente: Resistor
  Exemplo: divisor de tensão com dois resistores de 220 ohms em série.
  Ligações: 5V -> R1 -> ponto do meio -> R2 -> GND | ponto do meio -> A0
  Resultado esperado: cerca de 2,5 V no ponto do meio (metade de 5 V).
*/

void setup() {
  Serial.begin(9600);            // abre o Monitor Serial
}

void loop() {
  int leitura = analogRead(A0);              // 0 a 1023
  float tensao = leitura * (5.0 / 1023.0);   // converte para volts

  Serial.print("Leitura: ");
  Serial.print(leitura);
  Serial.print("  |  Tensao no ponto do meio: ");
  Serial.print(tensao, 2);
  Serial.println(" V");

  delay(500);
}
