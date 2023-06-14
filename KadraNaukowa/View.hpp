//
//  view.hpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 14/06/2023.
//

#ifndef view_hpp
#define view_hpp
#include <iostream>
#include <stdio.h>
using namespace std;



namespace View {

class UserInput {
public:
    void prompt(string i);
    void prompt(int k);
    int getInput();
 
    
};

}

#endif /* view_hpp */
