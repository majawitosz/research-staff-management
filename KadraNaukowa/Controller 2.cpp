//
//  Controller.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 25/06/2023.
//

#include "Controller.hpp"

void Controller::addScientist(string name, string surname, Field field){
    Scientist si(name, surname, &field);
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

vector<Field> Controller::retriveFields(){
    return fields;
}
void Controller::addField(string name, string description, int avg){
    Field fi(name ,description, avg);
    fields.push_back(fi);
}



void Controller::setEvaluationMethod(Evaluation* method){
    evaluation = method;
}

double Controller::calculatePeriodicScore(int id){
    for(int i = 0; i<scientists.size(); i++){
        if (id == scientists[i].getId()){
            return evaluation->calculateRating(scientists[i]);
        }
    }
    return 0.0;
}

Field Controller::findField(vector<Field> fields, int idF){
    Field choosenField;
    for(int i =0; i<fields.size(); i++){
        if(fields[i].getIdF() == idF)
            choosenField = fields[i];
    }
    return choosenField;
}
