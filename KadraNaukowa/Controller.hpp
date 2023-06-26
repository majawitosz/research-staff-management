//
//  Controller.hpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 25/06/2023.
//

#ifndef Controller_hpp
#define Controller_hpp
#include "Scientist.hpp"
#include <stdio.h>


class Controller {
    vector<Scientist> scientists;
    Evaluation* evaluation;
public:
    void addScientist(string name, string surname);
    vector<Scientist> retrieveScientists();
    void removeScientist(int id);
    void setEvaluationMethod(Evaluation* method);
    double calculatePeriodicScore(int i);
};

#endif /* Controller_hpp */
