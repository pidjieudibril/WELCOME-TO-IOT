
/*
  Titre      : demo blink
  Auteur     : Pidjieu dibril
  Date       : 06/11/2022
  Description: utilisation de vscode pour faire clignoter une led
  Version    : 0.0.1
*/

#include <Arduino.h>

const int ledPin = 8; // led sur la broche digital 8
const int TEMPO  = 5000; // LE DELAIt en miliseconde 
void setup() {
// put your setup code here, to run once:
// pinMode prend deux valeur la valeur de la broche et le mode de sortir de la broche
pinMode(ledPin, OUTPUT);  // mode sortir pour broche 
}

void loop() {
// put your main code here, to run repeatedly:
digitalWrite(ledPin, HIGH);        //Broche placé en mode HAUT  (3.3V) HIGH pour positive de 3.3v 
delay(TEMPO);                       //delai 5 seconde
digitalWrite(ledPin, LOW);         //broche placé en mode BAS (0v) Low pour negatif de 0V
delay(TEMPO);                       // délai a 5 seconde 
}