//
//  model.hpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 14/06/2023.
//

#ifndef Model_hpp
#define Model_hpp
#include "Scientist.hpp"
#include <vector>
using namespace std;

class Data {
    vector<Scientist> scientists;
public:
    void addScientist(vector<string> fni);
    vector<Scientist> retrieveScientists();
};



//Wszytsko powiązane z przechowywaniem danych
//namespace Model {
//
//class Researcher {
//public:
//    string name;
//    string surname;
//    vector<Researcher> researchers;
//public:
//    Researcher(string n = "Jan", string s = "Kowalski");
//    void addResearcher(string n, string s);
//    vector<Researcher> retrieveResearchers();
//
//};
//
//}

#endif /* model_hpp */
