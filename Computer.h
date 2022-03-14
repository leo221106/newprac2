#ifndef ADDS_2022_S1_TEACHING_COMPUTER_H 
#define ADDS_2022_S1_TEACHING_COMPUTER_H

#include "Player.h"

class ComputerPlayer : public Player { 
    public: 
    char makeMove() override; 
    Computer(); 
    
};

#endif 