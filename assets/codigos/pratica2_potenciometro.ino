/*
  Oficina de Robótica SELFÍS — Prática 2: Dimmer com potenciômetro
  Placa: Arduino Uno R3
  Ligações: potenciômetro -> 5V, A0 (pino do meio) e GND
            LED -> pino 11 (PWM) com resistor de 220 ohms até o GND
*/

const int PINO_POT = A0;   // entrada analógica: lê de 0 a 1023
const int PINO_LED = 11;   // saída PWM (~): escreve de 0 a 255

void setup() {
  pinMode(PINO_LED, OUTPUT);
  Serial.begin(9600);      // abre a comunicação com o computador (Monitor Serial)
}

void loop() {
  // 1) Lê a posição do potenciômetro (0 V -> 0 ... 5 V -> 1023)
  int leitura = analogRead(PINO_POT);

  // 2) Converte a escala 0–1023 para 0–255 (a escala do PWM)
  int brilho = map(leitura, 0, 1023, 0, 255);

  // 3) Aplica o brilho no LED
  analogWrite(PINO_LED, brilho);

  // 4) Mostra os valores no Monitor Serial
  float tensao = leitura * (5.0 / 1023.0);
  Serial.print("Leitura: ");
  Serial.print(leitura);
  Serial.print("  |  Tensao: ");
  Serial.print(tensao, 2);
  Serial.print(" V  |  Brilho: ");
  Serial.println(brilho);

  delay(100);              // pequena pausa para o Monitor Serial não "correr"
}
