//
//  view.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 14/06/2023.
//

#include "view.hpp"


string View::ResearcherInput::getName(){
    string n;
    cout<<"Name: ";
    cin>>n;
    return n;
}
string View::ResearcherInput::getSurname(){
    string s;
    cout<<"Surname: ";
    cin>>s;
    return s;
}
void View::ResearcherInput::displayResearchers(){
    
}


//void View::UserInput::prompt(string i){
//    cout<<i<<endl;
//}
//
//void View::UserInput::prompt(int k){
//    cout<<k<<endl;
//}
//
//int View::UserInput::getInput(){
//    int x;
//    cin >>x;
//    return x;
//}

