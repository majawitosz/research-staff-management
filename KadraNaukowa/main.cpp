//
//  main.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 12/06/2023.
//


#include "Logic.hpp"


int Scientist::usersCreated = -1;

int main(int argc, const char * argv[]) {
    UserInput u1;
    Data d1;
    Logic l1;
    l1.logic(&u1, &d1);
    return 0;
}
