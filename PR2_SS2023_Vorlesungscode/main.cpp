#include <iostream>
#include "Baby.h"
#include "CandyJar.h"
#include "FSM_Baby.h"
#include "ATM.h"

int main() {
    //FSM_Baby theFSM;
    //char a = ' ';
    //while(theFSM.getTheBaby().getAlter()<=3) {
      //  cout << "Bitte Eingabe machen ('U', 'G','M', 'A', 'L'): " << endl;
        //cin >> a;  // Eingabe
        //theFSM.evaluation(a); // Verarbeitung + Ausgabe

        ATM Sparkasse;
        Sparkasse.checkBestand();
        Sparkasse.auffuellen();
        Sparkasse.abheben(7000);
        Sparkasse.checkBestand();
        Sparkasse.abheben(5000);
        Sparkasse.auffuellen();
        Sparkasse.checkBestand();



        return 0;
    }




//
//    CandyJar BonbonGlas(99);
//    BonbonGlas.takeCandies(10);
//    BonbonGlas.takeCandies(100);
//    BonbonGlas.fillCandies(200);



//    Baby Hans;
//    Baby Greta("Greta", 3.0f);
//    Baby Willi("Willi");
//    cout << "Willi ist " << Willi.getAlter() << " h alt." << endl;
//    Willi.setName("Wilma");
//    cout << "Willi heisst jetzt " << Willi.getName() << endl;
//    Hans.weinen();
//    Hans.trinken();
//    Hans.schlafen(24);
//    //    Baby Hans("Hans", 1.0);

