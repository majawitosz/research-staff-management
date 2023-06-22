//
//  Field.hpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 20/06/2023.
//

#ifndef Field_hpp
#define Field_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <random>
using namespace std;

class Field {
    string name;
    string description;
    int avgPoints;
    vector<Field> fields;
public:
    Field(string = "Mathematics", string ="text", int = 10);
    void addField(string n, string d, int a);
    vector<Field> retriveFields();
    string fieldGetName();
    string fieldDescription();
    int fieldGetPoints();
    
    
   
};

#endif /* Field_hpp */
