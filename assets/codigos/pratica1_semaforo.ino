/*
  Oficina de Robótica SELFÍS — Prática 1: Semáforo
  Placa: Arduino Uno R3
  Ligações: LED vermelho -> pino 10 | LED amarelo -> pino 9 | LED verde -> pino 8
            (cada LED com um resistor de 220 ohms ligado ao GND)
*/

// 1) Damos nomes aos pinos: fica mais fácil ler e alterar o código
const int LED_VERMELHO = 10;
const int LED_AMARELO  = 9;
const int LED_VERDE    = 8;

// 2) Tempos de cada fase, em milissegundos (1000 ms = 1 segundo)
const int TEMPO_VERDE    = 4000;
const int TEMPO_AMARELO  = 1500;
const int TEMPO_VERMELHO = 4000;

void setup() {
  // setup() roda UMA vez, quando a placa liga
  pinMode(LED_VERMELHO, OUTPUT);  // o pino vai ENVIAR sinal (saída)
  pinMode(LED_AMARELO,  OUTPUT);
  pinMode(LED_VERDE,    OUTPUT);
}

void loop() {
  // loop() repete para sempre

  // Fase VERDE
  digitalWrite(LED_VERDE, HIGH);   // HIGH = 5 V = LED aceso
  digitalWrite(LED_AMARELO, LOW);  // LOW  = 0 V = LED apagado
  digitalWrite(LED_VERMELHO, LOW);
  delay(TEMPO_VERDE);              // espera

  // Fase AMARELA
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, HIGH);
  delay(TEMPO_AMARELO);

  // Fase VERMELHA
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERMELHO, HIGH);
  delay(TEMPO_VERMELHO);
}
