//
// Created by Dai on 21.03.23.
//

#ifndef PR2_SS2023_VORLESUNGSCODE_BABY_H
#define PR2_SS2023_VORLESUNGSCODE_BABY_H

#include <string>
#include <iostream>
using namespace std;


class Baby {
private:  // private Attribute
    string name;
    float alter;

public:  // public Methoden
    Baby();  // Default Constructor ohne Parameter
    Baby(string, float);  // Overload Constructor mit Attribute Typen als Parametertypen
    Baby(string);
    ~Baby();  // Destructor

    string getName(void) const;  // Getter-Methode mit const
    void setName(string);  // Setter-Methode Bitte nur definieren, wenn unbedingt notwendig wegen Information Hiding.
    float getAlter(void) const;
    void weinen();
    void flascheNehmen(void);
    void flascheFallenLassen(void);
    void trinken();
    void schlafen(int);
    int setSchlafdauer();
    void aufwachen();

    int dauer = 0;
};


#endif //PR2_SS2023_VORLESUNGSCODE_BABY_H
