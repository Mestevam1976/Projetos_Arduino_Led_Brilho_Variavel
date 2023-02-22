#include <Arduino.h>
#define LED 3 // Declarar Led no pino 3

void setup()
{
  pinMode(3, OUTPUT); // Define o pino 3 como saída digital
}

void loop()
{

  int i; // Declara int i
  for (i = 0; i <= 255; i++)
  {                    // Aumento do Brilho
    analogWrite(3, i); // Define o valor analógico
                       // do pino 3 como 'i
    delay(100);        // Pausas para 100 ms
  }

  for (i = 255; i > 0; i--)
  { // Brilho decrescente
    analogWrite(3, i);
    delay(100);
  }
}
