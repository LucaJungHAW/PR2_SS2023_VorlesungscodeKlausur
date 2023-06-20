//
// Created by Dai on 25.04.23.
//

#ifndef PR2_SS2023_VORLESUNGSCODE_FSM_BABY_H
#define PR2_SS2023_VORLESUNGSCODE_FSM_BABY_H

#include "Baby.h"
enum class BABY_STATES {IDLE, TRINKEND, WEINEND, SCHLAFEND};

class FSM_Baby {
private:
    Baby theBaby;
    BABY_STATES theState;
public:
    FSM_Baby();
    FSM_Baby(Baby);
    ~FSM_Baby();
    BABY_STATES getState() const;
    Baby getTheBaby() const;

    void evaluation(char input);

};


#endif //PR2_SS2023_VORLESUNGSCODE_FSM_BABY_H
