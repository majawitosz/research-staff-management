//
//  Field.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 20/06/2023.
//

#include "Field.hpp"

int Field::fieldsCreated = -2;

Field::Field(string n, string d, int a, int i): name(n), description(d), avgPoints(a), idF(i){
    fieldsCreated ++;
    idF = fieldsCreated;
}

void Field::addField(string n, string d, int a){
    Field fi(n ,d, a);
    fields.push_back(fi);
}

vector<Field> Field::retriveFields(){
    return fields;
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
