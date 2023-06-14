//
//  logic.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 14/06/2023.
//

#include "logic.hpp"


void Model::Storage::store(int n){
    x=n;
}
int Model::Storage::retrieve(){
    return x;
}

Controller::Logic::Logic(View::UserInput* _ui, Model::Storage* _s): ui(_ui), s(_s) {
    doLogic();
}

void Controller::Logic::doLogic(){
    //get the data from user
    ui->prompt("Enter a number: ");
    int i = ui->getInput();
    //store that data
    s->store(i);
    //retrieve the data
    int x = s->retrieve();
    //display the data
    ui->prompt("Here is the number you entered: ");
    ui->prompt(x);
    ui->prompt("\n");
    
    
}
