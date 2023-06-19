//
//  Scientist.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 12/06/2023.
//

#include "Scientist.hpp"

int Scientist::usersCreated = -1;

Scientist::Scientist(string n, string s, int i): name(n), surname(s), id(i){
    usersCreated ++;
    id = usersCreated;
}
