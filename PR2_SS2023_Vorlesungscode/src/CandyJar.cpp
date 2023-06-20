//
// Created by Dai on 11.04.23.
//

#include <iostream>
#include "CandyJar.h"

using namespace std;

CandyJar::CandyJar() {
    this->fuellWert = MAX_CANDY;
    fuellwertAusgeben();
}

CandyJar::CandyJar(int fuellWert) {
    this->fuellWert = fuellWert;
    fuellwertAusgeben();
}

CandyJar::~CandyJar() {
    cout << this->fuellWert << " Candies sind verloren gegangen. " << endl;
    cout << "Glas kaputt!" << endl;
}

int CandyJar::getFuellWert() const {
    return this->fuellWert;
}

void CandyJar::fuellwertAusgeben() {
    cout << "Das Glas enthält " << this->fuellWert << " Candies" << endl;
}

void CandyJar::takeCandies(int menge) {
    if (this->fuellWert - menge >=  0) {
        this->fuellWert -= menge;
    } else {
        if (this->fuellWert == 0) {
            cout << "Das Glas ist leider leer! " << endl;
        } else {
            cout << "Das Glas enthält nur " << this->fuellWert << " Bonbons! Du bekommst den Rest!" << endl;
            this->fuellWert = 0;
        }
    }
    fuellwertAusgeben();
}

void CandyJar::fillCandies2(int menge) {
    if (this->fuellWert + menge >= MAX_CANDY)  {
        cout << "Das Glas ist voll. Ich habe noch " << this->fuellWert + menge - MAX_CANDY  << " übrig!" << endl;
        this->fuellWert = MAX_CANDY;
    } else {
        this->fuellWert += menge;
    }
    fuellwertAusgeben();
}