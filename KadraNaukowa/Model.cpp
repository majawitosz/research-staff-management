//
//  model.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 14/06/2023.
//

#include "Model.hpp"

void Data::addScientist(string name, string surname){
    Scientist si(name, surname);
    scientists.push_back(si);
}

void Data::removeScientist(int id){
    vector<Scientist> removedScientists;
    for(int i = 0; i<scientists.size(); i++){
        if (id != scientists[i].id){
            removedScientists.push_back(scientists[i]);
        }
    }
    scientists = removedScientists;
    
}

vector<Scientist> Data::retrieveScientists(){
    return scientists;
}



