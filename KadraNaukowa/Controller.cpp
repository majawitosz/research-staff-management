//
//  logic.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 14/06/2023.
//

#include "Controller.hpp"


void Controller::Logic(UserInput* _ui, Data* _d){
    //get the data from user
    vector<string> fullnameInput = _ui->getFullName();
    //store the data
    _d->addScientist(fullnameInput);
    //retrive the data
    vector<Scientist> retrivedData = _d->retrieveScientists();
    //display the data
    _ui->displayScientists(retrivedData);
    
}


//Controller::Logic::Logic(View::ResearcherInput* _ri, Model::Researcher* _r): ri(_ri), r(_r) {
//   doLogic();
//}
//
//void Controller::Logic::doLogic(){
//    //get the data from user
//    string n = ri->getName();
//    string s = ri->getSurname();
//    //store the data
//    r->addResearcher(n,s);
//    //retrive the data
//    vector<Model::Researcher> retrivedData = r->retrieveResearchers();
//    ri->displayResearchers(retrivedData);
//
//}
    


