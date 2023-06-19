//
//  view.hpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 12/06/2023.
//

#ifndef View_hpp
#define View_hpp
#include "Data.hpp"


class UserInput {
public:
    int promptStart();
    string getName();
    string getSurname();
    void displayScientists(vector<Scientist> retrivedData);
    int pickScientistDelete();
    
};

class InputHandler {
    UserInput* userInput;
    Data* data;
    Scientist* scientist;
public:
    char keyboardInput();
    void logic(UserInput* ui, Data* d, Scientist* s);
};

#endif /* view_hpp */
