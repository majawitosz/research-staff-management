//
//  main.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 12/06/2023.
//


#include "Scientist.hpp"
#include "View.hpp"
#include "Controller.hpp"


int main(int argc, const char * argv[]) {
    UserInput u1;
    //Scientist s1;
    Controller c1;
    Field f1;
    InputHandler i1;
    i1.logic(&u1, &c1, &f1);
    return 0;
}
