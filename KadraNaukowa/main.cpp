//
//  main.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 14/06/2023.
//


#include "view.hpp"
#include "logic.hpp"

int main(int argc, const char * argv[]) {
    
    View::UserInput u1;
    Model::Storage s1;
    Controller::Logic l1(&u1, &s1);
    
  
    return 0;
}
