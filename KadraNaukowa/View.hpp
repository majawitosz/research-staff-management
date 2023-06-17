//
//  view.hpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 14/06/2023.
//

#ifndef View_hpp
#define View_hpp
#include "Model.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class UserInput {
public:
    string getName();
    string getSurname();
    void displayScientists(vector<Scientist> retrivedData);
    int pickScientistDelete();
};



//namespace Model {
//class Researcher;
//}
//
//
//namespace View {
//
//class ResearcherInput {
//
//public:
//    string getName();
//    string getSurname();
//    void displayResearchers(vector<Model::Researcher>& researchers);
//
//};
//}

#endif /* view_hpp */
