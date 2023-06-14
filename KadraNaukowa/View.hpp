//
//  view.hpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 14/06/2023.
//

#ifndef view_hpp
#define view_hpp
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;



namespace View {

//class UserInput {
//public:
//    void prompt(string i);
//    void prompt(int k);
//    int getInput();
//};

class ResearcherInput {
  
public:
    void displayResearchers();
    string getName();
    string getSurname();
    
};
}

#endif /* view_hpp */
