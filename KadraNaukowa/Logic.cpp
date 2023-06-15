//
//  logic.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 14/06/2023.
//

#include "Logic.hpp"
#include "View.hpp"
#include "Model.hpp"

Controller::Logic::Logic(View::ResearcherInput* _ri, Model::Researcher* _r): ri(_ri), r(_r) {
   doLogic();
}

void Controller::Logic::doLogic(){
    //get the data from user
    string n = ri->getName();
    string s = ri->getSurname();
    //store the data
    r->addResearcher(n,s);
    //retrive the data
    vector<Model::Researcher> retrivedData = r->retrieveResearchers();
    ri->displayResearchers(retrivedData);
    
}
    

//void Model::Storage::store(int n){
//    x=n;
//}
//int Model::Storage::retrieve(){
//    return x;
//}
//
//Controller::Logic::Logic(View::UserInput* _ui, Model::Storage* _s): ui(_ui), s(_s) {
//    doLogic();
//}
//
//void Controller::Logic::doLogic(){
//    //get the data from user
//    ui->prompt("Enter name of a researcher: ");
//    int i = ui->getInput();
//    
//    //store that data
//    s->store(i);
//    //retrieve the data
//    int x = s->retrieve();
//    //display the data
//    ui->prompt("Here is the number you entered: ");
//    ui->prompt(x);
//    ui->prompt("\n");
//    
//    
//}
