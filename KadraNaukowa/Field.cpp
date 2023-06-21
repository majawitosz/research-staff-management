//
//  Field.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 20/06/2023.
//

#include "Field.hpp"


Field::Field(string n, string d, int a): name(n), description(d), avgPoints(a){}

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
