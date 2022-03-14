#include "Human.h"

Human::Human() = default;

char Human::makeMove() {
    
    int errorCount = 0;
    while (
        this->currentMove != 'R' &&
        this->currentMove != 'P' &&
        this->currentMove != 'S'
        ){
            
        std::cout << "Enter Move: ";
        std::cin >> this->currentMove;
        errorCount++;
        
        if (errorCount >= 3) {
            std::cerr << "error input for 3 times" << std::endl;
            break;
        }
        }
        return this->currentMove;
}

void Human::setCurrentMove(char currentMove) {
    Human::currentMove = currentMove;
    
}
void Human::setAge(int age) {
    if (age > 0 && age <= 200) {
        Human::age = age;
    } else {
        std::cerr << "age error : " << age << std::endl;
    }
}

int Human::getAge() const {
     return age;
 }
 
Human::~HumanPlayer() {
    
    
 }
     