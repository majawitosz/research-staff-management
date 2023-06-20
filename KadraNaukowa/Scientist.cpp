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
