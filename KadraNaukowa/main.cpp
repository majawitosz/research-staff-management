//
//  main.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 14/06/2023.
//


#include "Logic.hpp"
#include "View.hpp"
#include "Model.hpp"


int main(int argc, const char * argv[]) {
    
    View::ResearcherInput r1;
   
    Model::Researcher m1;

    Controller::Logic l1(&r1, &m1);
    
    
//    View::UserInput u1;
//    Model::Storage s1;
//    Controller::Logic l1(&u1, &s1);
    
  
    return 0;
}
