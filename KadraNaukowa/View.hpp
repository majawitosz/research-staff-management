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
//    string getName();
//    string getSurname();
    void displayScientists(vector<Scientist> retrivedData);
//    int pickScientistDelete();
//    int pickEvaluationMethod();
    void displayEvaluationResult(double result);
//    string fieldGetName();
//    string fieldGetDescription();
//    int fieldGetAvgPoints();
    template <typename T> T getUserInput(string prompt);
    
};

class InputHandler {
    UserInput* userInput;
    Scientist* scientist;
    Field* field;
public:
    char keyboardInput();
    void logic(UserInput* ui, Scientist* s, Field* f);
};

#endif /* view_hpp */
