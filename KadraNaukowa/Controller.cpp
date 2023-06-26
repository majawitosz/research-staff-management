//
//  Controller.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 25/06/2023.
//

#include "Controller.hpp"

void Controller::addScientist(string name, string surname){
    Scientist si(name, surname);
    scientists.push_back(si);
}
void Controller::removeScientist(int id){
    vector<Scientist> removedScientists;
    for(int i = 0; i<scientists.size(); i++){
        if (id != scientists[i].getId()){
            removedScientists.push_back(scientists[i]);
        }
    }
    scientists = removedScientists;
}
   

vector<Scientist> Controller::retrieveScientists(){
    return scientists;
}

void Controller::setEvaluationMethod(Evaluation* method){
    evaluation = method;
}

double Controller::calculatePeriodicScore(int i){
    for(int j = 0; j<scientists.size(); j++){
        if (i == scientists[j].getId()){
            return evaluation->calculateRating(scientists[j]);
        }
    }
    return 0.0;
}
