//
//  Scientist.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 15/06/2023.
//

#include "Scientist.hpp"

Scientist::Scientist(string n, string s, int i): name(n), surname(s), id(i){
    usersCreated ++;
    id = usersCreated;
}
