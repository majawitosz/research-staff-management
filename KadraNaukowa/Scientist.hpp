//
//  Scientist.hpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 12/06/2023.
//

#ifndef Scientist_hpp
#define Scientist_hpp
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Scientist {
    string name;
    string surname;
    static int usersCreated;
    int id;
    vector<Scientist> scientists;
public:
    string getNameScientist();
    string getSurnameScientist();
    int getId();
    void addScientist(string name, string surname);
    vector<Scientist> retrieveScientists();
    void removeScientist(int id);
    vector<Scientist> retriveRemovedScientists();
    Scientist(string = "John", string ="Smith", int = 0);
    
};

class ScientistRates {
//    pair<int, double> bachelorThesis;
//    pair<int, double> masterThesis;
//    pair<int, double> phDThesis;
//    int yearsRated;
    
};

class Algorythm {
public:
    virtual void calculateRating(Scientist& rating) = 0;
};

class SupervisonRating :public Algorythm {
public:
    void calculateRating(Scientist& rating);
};

class SurveysRating :public Algorythm {
public:
    void calculateRating(Scientist& rating);
};

#endif /* Scientist_hpp */
