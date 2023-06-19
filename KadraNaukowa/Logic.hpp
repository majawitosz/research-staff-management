//
//  logic.hpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 12/06/2023.
//

#ifndef Logic_hpp
#define Logic_hpp
#include "View.hpp"
#include "Data.hpp"
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;


class Logic {
    UserInput* userInput;
    Data* data;
public:
    char keyboardInput();
    void logic(UserInput* ui, Data* d);
};


#endif /* Logic_hpp */
