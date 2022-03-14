#ifndef CMAKE_CLION_CONAN_TEMPLATE_PLAYER_H 
#define CMAKE_CLION_CONAN_TEMPLATE_PLAYER_H

#include <string> 
#include <iostream>

class Player { 
    public: 
    Player();
    
    virtual ~Player(); 
    virtual char makeMove() = 0; 
    const std::string &getName() const; 
    void setName(const std::string &name); 
    private: std::string name;
};

#endif 