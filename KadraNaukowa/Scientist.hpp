//
//  Scientist.hpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 12/06/2023.
//

#ifndef Scientist_hpp
#define Scientist_hpp
#include "Field.hpp"
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <random>
using namespace std;


class Evaluation;

class Scientist {
    string name;
    string surname;
    static int usersCreated;
    int id;
    vector<Scientist> scientists;
    
    Field* field;
public:
    Scientist(string = "John", string ="Smith", int = 0);
    string getNameScientist();
    string getSurnameScientist();
    int getId();
   // void addScientist(string name, string surname);
   
   
   
    
};

class Evaluation {
public:
    virtual double calculateRating(Scientist& scientist) = 0;
};

class BasicEvaluation :public Evaluation {
public:
    double calculateRating(Scientist& scientist);
};

class AdvancedEvaluation :public Evaluation {
public:
    double calculateRating(Scientist& scientist);
};

#endif /* Scientist_hpp */
