//
//  view.hpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 14/06/2023.
//

#ifndef View_hpp
#define View_hpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

namespace Model {
class Researcher;
}


namespace View {

class ResearcherInput {
  
public:
    string getName();
    string getSurname();
    void displayResearchers(vector<Model::Researcher>& researchers);
    
};
}

#endif /* view_hpp */
