#include <Arduino.h>

const int commandeA=PIN2;
const int commandeB=PIN3;

const int signalC=PIN4;
const int signalD=PIN5;

const int controlE=PIN7;


void unQuiRentre() {
    delay(250);
    digitalWrite(signalC, HIGH);
    delay(250);
    digitalWrite(signalD, HIGH);
    delay(250);
    digitalWrite(signalC, LOW);
    delay(250);
    digitalWrite(signalD, LOW);
}

void unQuiSort() {
    delay(250);
    digitalWrite(signalD, HIGH);
    delay(250);
    digitalWrite(signalC, HIGH);
    delay(250);
    digitalWrite(signalD, LOW);
    delay(250);
    digitalWrite(signalC, LOW);
}


void setup() {
// write your initialization code here

    pinMode(commandeA, INPUT);
    pinMode(commandeB, INPUT);
    pinMode(controlE, INPUT);

    pinMode(signalC, OUTPUT);
    pinMode(signalD, OUTPUT);

    // Etat par défaut
    digitalWrite(signalC, LOW);
    digitalWrite(signalD, LOW);

}

void loop() {

    if (digitalRead(controlE) == 0) {
        if (digitalRead(commandeA) == 0)
            unQuiRentre();
        if (digitalRead(commandeB) == 0)
            unQuiSort();
    }
}