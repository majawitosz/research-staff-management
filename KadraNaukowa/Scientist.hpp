//
//  Scientist.hpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 15/06/2023.
//

#ifndef Scientist_hpp
#define Scientist_hpp
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Scientist {
    
public:
    string name;
    string surname;
    static int usersCreated;
    int id;
    Scientist(string = "John", string ="Smith", int = 0);
    
};

#endif /* Scientist_hpp */
