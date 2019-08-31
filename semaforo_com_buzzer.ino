#define VERDE 13
#define AMARELO 12
#define VERMELHO 11
#define TEMPO_SINAL 10000
#define TEMPO_ATENCAO 5000

void setup()
{
  pinMode(VERMELHO, OUTPUT);
  pinMode(AMARELO, OUTPUT);
  pinMode(VERDE, OUTPUT);
}

void loop()
{  
  ligaVerde();
  delay(TEMPO_SINAL);
  ligaAmarelo();
  delay(TEMPO_ATENCAO);
  ligaVermelho();
  delay(TEMPO_SINAL);
}

void ligaVermelho()
{
  digitalWrite(VERMELHO, HIGH);
  tone(VERMELHO, 550);
  digitalWrite(VERDE, LOW);
  digitalWrite(AMARELO, LOW);
}

void ligaVerde()
{
  noTone(VERMELHO);
  digitalWrite(VERDE, HIGH);
  digitalWrite(VERMELHO, LOW);
  digitalWrite(AMARELO, LOW);
}

void ligaAmarelo()
{
  noTone(VERMELHO);
  digitalWrite(AMARELO, HIGH);
  digitalWrite(VERDE, LOW);
  digitalWrite(VERMELHO, LOW);
}
