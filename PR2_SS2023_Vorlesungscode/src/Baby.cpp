//
// Created by Dai on 21.03.23.
//
#include "Baby.h"

Baby::Baby() {  // Default Constructor Implementierung
    name = "Hans";
    alter = 0.0f;
    cout << name << " ist geboren!" << endl;
}

Baby::Baby(string name, float alter) {  // Overload Constructor mit zwei Parametern
    this->name = name;
    this->alter = alter;
}

Baby::Baby(string name) { // Overload Constructor mit einem Parameter
    this->name = name;
    this->alter = 0.0f;
}

Baby::~Baby() {
    cout << this->name << " stirbt!" << endl;
}

// Getter-Methoden Implementieren:
string Baby::getName() const {
    return this->name;
}

float Baby::getAlter() const {
    return this->alter;
}

// Setter-Methoden Implementieren:
void Baby::setName(string name) {
 this->name = name;
}

void Baby::trinken() {  // Methoden Implementierung
    cout << "ich trinke!" << endl;
}

void Baby::weinen() {
    cout << "Buäääää!" << endl;
}

void Baby::schlafen(int dauer) {
    cout << "Habe für " << dauer << " h geschlafen!" << endl;
}

void Baby::flascheNehmen() {
    cout << "Flasche genommen " << endl;
}

void Baby::flascheFallenLassen() {
    cout << "Flasche ist runtergefallen " << endl;
}

int Baby::setSchlafdauer() {
    cout << "Bitte gib eine Schlafdauer ein! " << endl;
    cin >> dauer;
    return dauer;
}

void Baby::aufwachen() {
    cout << this->getName() << "ist aufgewacht!" << endl;
}