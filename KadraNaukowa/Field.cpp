//
//  Field.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 20/06/2023.
//

#include "Field.hpp"

int Field::fieldsCreated = 0;


Field::Field(string n, string d, int a, int i): name(n), description(d), avgPoints(a), idF(i){
    fieldsCreated ++;
    idF = fieldsCreated;
}

string Field::fieldGetName(){
    return name;
}
string Field::fieldDescription(){
    return description;
}
int Field::fieldGetPoints(){
    return avgPoints;
}
int Field::getIdF(){
    return idF;
}

