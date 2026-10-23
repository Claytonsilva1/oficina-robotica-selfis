/*
  Oficina de Robótica SELFÍS — Componente: Potenciômetro
  Exemplo: ler a posição do potenciômetro no Monitor Serial.
  Ligações: 5V -> pino 1 | A0 -> pino 2 (meio) | GND -> pino 3
*/

void setup() {
  Serial.begin(9600);
}

void loop() {
  int leitura = analogRead(A0);                    // 0 a 1023
  float tensao = leitura * (5.0 / 1023.0);         // 0 a 5 V
  int porcento = map(leitura, 0, 1023, 0, 100);    // 0 a 100 %

  Serial.print("Leitura: ");
  Serial.print(leitura);
  Serial.print("  |  ");
  Serial.print(tensao, 2);
  Serial.print(" V  |  ");
  Serial.print(porcento);
  Serial.println(" %");

  delay(200);
}
