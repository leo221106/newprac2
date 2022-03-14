#ifndef CMAKE_CLION_CONAN_TEMPLATE_HUMANPLAYER_H 
#define CMAKE_CLION_CONAN_TEMPLATE_HUMANPLAYER_H

#include "Player.h"

class HumanPlayer : public Player { 
public: 
    HumanPlayer(); 
    char makeMove() override;
    void setCurrentMove(char currentMove); 
    void setAge(int age); 
    int getAge() const; 
    virtual ~HumanPlayer();
private:
    int age = 0; 
    char currentMove = 'A';
    
};

#endif 