// CandyJar Implementierung und Testen
// Created by Dai on 11.04.23.
//

#ifndef PR2_SS2023_VORLESUNGSCODE_CANDYJAR_H
#define PR2_SS2023_VORLESUNGSCODE_CANDYJAR_H

#define MAX_CANDY 100

class CandyJar {
private:
    int fuellWert;

public:
    CandyJar(); // Default Constructor
    CandyJar(int);  // Overload Constructor
    ~CandyJar();  // Destructor
    int getFuellWert(void) const;  // Getter-Methode mit const
    void takeCandies(int);
    void fillCandies(int);
    void fillCandies2(int);

private:
    void fuellwertAusgeben(void);
};


#endif //PR2_SS2023_VORLESUNGSCODE_CANDYJAR_H
