#ifndef ADDS_2022_S1_TEACHING_REFEREE_H 
#define ADDS_2022_S1_TEACHING_REFEREE_H

#include "HumanPlayer.h" 
#include "ComputerPlayer.h"

class Referee { 
    public: 
    Referee();
    char refGame(HumanPlayer player1, ComputerPlayer player2);
};

#endi