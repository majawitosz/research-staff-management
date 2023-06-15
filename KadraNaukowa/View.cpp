//
//  view.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 14/06/2023.
//

#include "View.hpp"

vector<string> UserInput::getFullName(){
    string name;
    string surname;
    cout<<"Name: ";
    cin>>name;
    fullname.push_back(name);
    cout<<"Surname: ";
    cin>>surname;
    fullname.push_back(surname);
    return fullname;
}

void UserInput::displayScientists(vector<Scientist> scientistsI){
    for(int i = 0; i<scientistsI.size(); i++){
        cout<<"Name that you entered: "<<scientistsI[i].name<<endl;
        cout<<"Surname that you entered: "<<scientistsI[i].surname<<endl;
    }
    
}





//string View::ResearcherInput::getName(){
//    string n;
//    cout<<"Name: ";
//    cin>>n;
//    return n;
//}
//string View::ResearcherInput::getSurname(){
//    string s;
//    cout<<"Surname: ";
//    cin>>s;
//    return s;
//}
//void View::ResearcherInput::displayResearchers(vector<Model::Researcher>& researchers){
//    for(int i = 0; i<researchers.size(); i++) {
//        cout << "Name: " << researchers[i].name << endl;
//        cout << "Surname: "<<researchers[i].surname<<endl;
//        cout << endl;
//
//    }
//}



