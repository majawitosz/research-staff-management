//
//  model.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 14/06/2023.
//

#include "Model.hpp"

void Data::addScientist(vector<string> fni){
    string n;
    n = fni[0];
    string s;
    s = fni[1];
    Scientist s1(n, s);
    scientists.push_back(s1);
}

vector<Scientist> Data::retrieveScientists(){
    return scientists;
}


//Model::Researcher::Researcher(string n, string s): name(n), surname(s){};
//
//void Model::Researcher::addResearcher(string n, string s){
//    Researcher r1(n, s);
//    researchers.push_back(r1);
//}
//vector<Model::Researcher> Model::Researcher::retrieveResearchers(){
//    return researchers;
//}
