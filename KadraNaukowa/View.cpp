//
//  view.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 14/06/2023.
//

#include "View.hpp"
#include "Model.hpp"


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
void View::ResearcherInput::displayResearchers(vector<Model::Researcher>& researchers){
    for(int i = 0; i<researchers.size(); i++) {
        cout << "Name: " << researchers[i].name << endl;
        cout << "Surname: "<<researchers[i].surname<<endl;
        cout << endl;
        
    }
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

