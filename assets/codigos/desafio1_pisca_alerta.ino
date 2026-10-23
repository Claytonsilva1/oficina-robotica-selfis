/*
  Oficina de Robótica SELFÍS — Desafio da Prática 1
  Semáforo com "modo alerta": depois de cada ciclo, o amarelo pisca 5 vezes.
  Mesma montagem da Prática 1.
*/
const int LED_VERMELHO = 10;
const int LED_AMARELO  = 9;
const int LED_VERDE    = 8;

void setup() {
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_AMARELO,  OUTPUT);
  pinMode(LED_VERDE,    OUTPUT);
}

void apagaTudo() {
  digitalWrite(LED_VERMELHO, LOW);
  digitalWrite(LED_AMARELO,  LOW);
  digitalWrite(LED_VERDE,    LOW);
}

void loop() {
  apagaTudo(); digitalWrite(LED_VERDE, HIGH);    delay(4000);
  apagaTudo(); digitalWrite(LED_AMARELO, HIGH);  delay(1500);
  apagaTudo(); digitalWrite(LED_VERMELHO, HIGH); delay(4000);

  // Modo alerta: o laço "for" repete o bloco 5 vezes
  apagaTudo();
  for (int i = 0; i < 5; i++) {
    digitalWrite(LED_AMARELO, HIGH);
    delay(400);
    digitalWrite(LED_AMARELO, LOW);
    delay(400);
  }
}
