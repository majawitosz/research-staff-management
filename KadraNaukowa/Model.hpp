//
//  model.hpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 14/06/2023.
//

#ifndef Model_hpp
#define Model_hpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//Wszytsko powiązane z przechowywaniem danych
namespace Model {

class Researcher {
public:
    string name;
    string surname;
    vector<Researcher> researchers;
public:
    Researcher(string n = "Jan", string s = "Kowalski");
    void addResearcher(string n, string s);
    vector<Researcher> retrieveResearchers();
    
};

}

#endif /* model_hpp */
