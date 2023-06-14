//
//  view.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 14/06/2023.
//

#include "view.hpp"


void View::UserInput::prompt(string i){
    cout<<i<<endl;
}

void View::UserInput::prompt(int k){
    cout<<k<<endl;
}

int View::UserInput::getInput(){
    int x;
    cin >>x;
    return x;
}
