//
//  view.hpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 12/06/2023.
//

#ifndef View_hpp
#define View_hpp
#include "Scientist.hpp"


class UserInput {
public:
    int promptStart();
    string getName();
    string getSurname();
    void displayScientists(vector<Scientist> retrivedData);
    int pickScientistDelete();
    int pickEvaluationMethod();
    void displayEvaluationResult(double result);
};

class InputHandler {
    UserInput* userInput;
    Scientist* scientist;
public:
    char keyboardInput();
    void logic(UserInput* ui, Scientist* s);
};

#endif /* view_hpp */
