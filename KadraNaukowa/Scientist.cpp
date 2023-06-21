//
//  Scientist.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 12/06/2023.
//

#include "Scientist.hpp"

int Scientist::usersCreated = -1;

Scientist::Scientist(string n, string s, int i): name(n), surname(s), id(i){
    usersCreated ++;
    id = usersCreated;
}
void Scientist::addScientist(string name, string surname){
    Scientist si(name, surname);
    scientists.push_back(si);
}
void Scientist::removeScientist(int id){
    vector<Scientist> removedScientists;
    for(int i = 0; i<scientists.size(); i++){
        if (id != scientists[i].id){
            removedScientists.push_back(scientists[i]);
        }
    }
    scientists = removedScientists;
}
vector<Scientist> Scientist::retrieveScientists(){
    return scientists;
}
string Scientist::getNameScientist(){
    return name;
}
string Scientist::getSurnameScientist(){
    return surname;
}
int Scientist::getId(){
    return id;
}

double BasicEvaluation::calculateRating(Scientist& scientist){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(0.0,100.0);
    double randomValue1 = distr(gen);
    return randomValue1;
}

double AdvancedEvaluation::calculateRating(Scientist& scientist){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr1(101.0, 200.0);
    double randomValue2 = distr1(gen);
    return randomValue2;
}

void Scientist::setEvaluationMethod(Evaluation* method){
    evaluation = method;
}

double Scientist::calculatePeriodicScore(int i){
    for(int j = 0; j<scientists.size(); j++){
        if (i == scientists[j].id){
            return evaluation->calculateRating(*this);
        }
    }
    return 0.0;
}

