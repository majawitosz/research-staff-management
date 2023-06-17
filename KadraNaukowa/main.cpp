//
//  main.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 14/06/2023.
//

#include <iostream>
#include "Controller.hpp"
using namespace std;

int Scientist::usersCreated = -1;

int main(int argc, const char * argv[]) {
    UserInput u1;
    Data d1;
    Controller c1;
    c1.Logic(&u1, &d1);
    return 0;
}
