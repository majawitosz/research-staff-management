//
//  view.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 14/06/2023.
//

#include "View.hpp"

int UserInput::promptStart(){
    cout<<" ------------------------------"<<endl;
    cout<<"|        Pick an action        |"<<endl;
    cout<<"|    PRESS 1: add scientist    |"<<endl;
    cout<<"|  PRESS 2: display scientists |"<<endl;
    cout<<"|   PRESS 3: remove scientist  |"<<endl;
    cout<<"|        PRESS 0: exit         |"<<endl;
    cout<<" ------------------------------"<<endl;
  
    int input;
    cin>>input;
    return input;
}


string UserInput::getName(){
    cout<<"Name: ";
    string n;
    cin>>n;
    return n;
}
string UserInput::getSurname(){
    cout<<"Surname: ";
    string s;
    cin>>s;
    return s;
}

void UserInput::displayScientists(vector<Scientist> retrivedData){
    cout<<endl;
    cout<<"List of scientists: "<<endl;
    for(int i = 0; i<retrivedData.size(); i++){
        cout<<"ID: ["<<retrivedData[i].id<<"]"<<endl;
        cout<<"Name: "<<retrivedData[i].name<<endl;
        cout<<"Surname: "<<retrivedData[i].surname<<endl;
        cout<<endl;
    }
    
}

int UserInput::pickScientistDelete(){
    //cout<<"Amount of scientists: "<<Scientist::usersCreated+1<<endl;
    
    cout<<"Enter ID of scientist you want to remove: ";
    int ID;
    cin>>ID;
    return ID;
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



