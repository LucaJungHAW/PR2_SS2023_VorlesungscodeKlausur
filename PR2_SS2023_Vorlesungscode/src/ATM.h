//
// Created by lumis on 16.05.2023.
//

#ifndef PR2_SS2023_VORLESUNGSCODE_ATM_H
#define PR2_SS2023_VORLESUNGSCODE_ATM_H


class ATM {

private:
    int bestand;

public:
    void auffuellen();
    int abheben(int betrag);
    int checkBestand() const;

    ATM();

};


#endif //PR2_SS2023_VORLESUNGSCODE_ATM_H
