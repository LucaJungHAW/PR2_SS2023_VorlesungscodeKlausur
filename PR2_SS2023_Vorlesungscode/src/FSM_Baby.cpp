//
// Created by Dai on 25.04.23.
//

#include "FSM_Baby.h"

FSM_Baby::FSM_Baby() {
    this->theState = BABY_STATES::IDLE;
    Baby Hans;
    this->theBaby = Hans;
}

FSM_Baby::FSM_Baby(Baby theBaby) {
    this->theState = BABY_STATES::IDLE;
    this->theBaby = theBaby;
}

FSM_Baby::~FSM_Baby() {
    cout << "FSM tot" << endl;
}

Baby FSM_Baby::getTheBaby() const {
    return theBaby;
}

BABY_STATES FSM_Baby::getState() const {
    return this->theState;
}

void FSM_Baby::evaluation(char input) {
    switch (this->theState) {  // Schau nach dem aktuellen Zustand
        case BABY_STATES::IDLE:
            if (input == 'U') {
                this->theState = BABY_STATES::WEINEND;  // wechsele in den neuen Zustand
                theBaby.weinen();
            }
            break;
        case BABY_STATES::WEINEND:
            if (input == 'G') {
                this->theState = BABY_STATES::TRINKEND;
                theBaby.flascheNehmen();
                theBaby.trinken();
            }
            break;
        case BABY_STATES::TRINKEND:
            if(input == 'L') {
                this->theState = BABY_STATES::IDLE;
                theBaby.flascheFallenLassen();
            }
            else if(input == 'M') {
                this->theState = BABY_STATES::SCHLAFEND;
                theBaby.schlafen(theBaby.setSchlafdauer());
                theBaby.flascheFallenLassen();
            }
            break;
        case BABY_STATES::SCHLAFEND:
            if(theBaby.dauer >= 3) {
                this->theState = BABY_STATES::IDLE;
                theBaby.aufwachen();
            }
            else if(input == 'A'){
                this->theState = BABY_STATES::WEINEND;
                theBaby.weinen();
            }
            else {
                this->theState = BABY_STATES::SCHLAFEND;
            }
            break;
        default:
            cout << "Ausserhalb der FSM" << endl;
            break;
    }
}