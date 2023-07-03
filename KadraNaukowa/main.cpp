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
    Controller c1;
    InputHandler i1;
    i1.handleInput(&u1, &c1);
    return 0;
}
