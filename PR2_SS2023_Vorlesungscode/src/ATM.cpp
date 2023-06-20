//
// Created by lumis on 16.05.2023.
//
#include <iostream>
#include "ATM.h"
#define max 10000
#define leer 0

using namespace std;

ATM::ATM() {
    this->bestand = leer;
}

void ATM::auffuellen() {

    if(this->bestand>= max){
        cout << "Automat ist maximal aufgefuellt!" << endl;
    }
    else if(this->bestand > leer){
        cout << "Automat wurde um den Betrag " << max - this->bestand <<" aufgefuellt!" << endl;
    }

    this->bestand = max;
    cout << "Automat wurde maximal aufgefuellt!" << endl;
}

int ATM::abheben(int betrag) {

    if(this->bestand >= betrag){
        this->bestand = bestand - betrag;
        cout << "Der neue bestand betraegt " << this->bestand << endl;
    }
    else if(this->bestand < betrag){
        cout << "Nicht genuegent Geld vorhanden, du bekommst " << this->bestand << endl;
        this->bestand = leer;
    }


}

int ATM::checkBestand() const {

    cout << "Der bestand beträegt " << this->bestand << endl;

    return this->bestand;

}
