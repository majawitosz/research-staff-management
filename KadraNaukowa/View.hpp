//
//  view.hpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 12/06/2023.
//

#ifndef View_hpp
#define View_hpp
#include "Scientist.hpp"
#include "Controller.hpp"


class UserInput {
public:
    int promptStart();
    template <typename T> T getUserInput(string prompt);
    void displayScientists(vector<Scientist> retrivedData);
    void displayEvaluationResult(double result);
    void displayFields(vector<Field> retrivedData);
   
};

class InputHandler {
    UserInput* userInput;
    //Scientist* scientist;
    Controller* controller;
    Field* field;
public:
    char keyboardInput();
    void logic(UserInput* ui, Controller* c, Field* f);
    void errorHandling(int idInput, vector<Scientist> scientists);
};

#endif /* view_hpp */
