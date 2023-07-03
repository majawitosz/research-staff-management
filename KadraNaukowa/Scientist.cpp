//
//  Scientist.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 12/06/2023.
//

#include "Scientist.hpp"

int Scientist::usersCreated = 0;

Scientist::Scientist(string n, string s, Field* f, int i): name(n), surname(s), field(f), id(i){
    usersCreated ++;
    id = usersCreated;
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
string Scientist::getFieldName(){
    return field->fieldGetName();
}

double BasicEvaluation::calculateRating(Scientist& scientist){
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> distr(0.0,100.0);
    double randomValue1 = distr(gen);
    return randomValue1;
}

double AdvancedEvaluation::calculateRating(Scientist& scientist){
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> distr1(101.0, 200.0);
    double randomValue2 = distr1(gen);
    return randomValue2;
}



