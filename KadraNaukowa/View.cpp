//
//  view.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 12/06/2023.
//

#include "View.hpp"

int UserInput::promptStart(){
    cout<<" ----------------------------------"<<endl;
    cout<<"|          Pick an action          |"<<endl;
    cout<<"|      PRESS 1: add scientist      |"<<endl;
    cout<<"|    PRESS 2: display scientists   |"<<endl;
    cout<<"|     PRESS 3: remove scientist    |"<<endl;
    cout<<"|   PRESS 4: for basic evaluation  |"<<endl;
    cout<<"| PRESS 5: for advanced evaluation |"<<endl;
    cout<<"|          PRESS 0: exit           |"<<endl;
    cout<<" ----------------------------------"<<endl;
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
        cout<<"ID: ["<<retrivedData[i].getId()<<"]"<<endl;
        cout<<"Name: "<<retrivedData[i].getNameScientist()<<endl;
        cout<<"Surname: "<<retrivedData[i].getSurnameScientist()<<endl;
        cout<<endl;
    }
}

int UserInput::pickScientistDelete(){
    cout<<"Enter ID of scientist you want to remove: ";
    int ID;
    cin>>ID;
    return ID;
}
int UserInput::pickEvaluationMethod(){
    cout<<"Choose ID of scientist that you want to calculate rating for"<<endl;
    int idEvaluation;
    cin>>idEvaluation;
    return idEvaluation;
}

void UserInput::displayEvaluationResult(double result){
    cout<<"The result od evaluation is: "<<result<<endl;
}

void InputHandler::logic(UserInput* ui, Scientist* s){
    bool exitProgram = false;
    while (!exitProgram) {
        int input = ui->promptStart();
        switch (input) {
            case 0: {
                exitProgram = true;
                break;
            }
            case 1: {
                string name = ui->getName();
                string surname = ui->getSurname();
                s->addScientist(name, surname);
                break;
            }
            case 2: {
                vector<Scientist> retrivedData = s->retrieveScientists();
                ui->displayScientists(retrivedData);
                break;
            }
            case 3: {
                vector<Scientist> retrivedData = s->retrieveScientists();
                ui->displayScientists(retrivedData);
                int IDinput = ui->pickScientistDelete();
                s->removeScientist(IDinput);
                break;
            }
            case 4: {
                int idEvaluation = ui->pickEvaluationMethod();
                Evaluation* basic = new BasicEvaluation();
                s->setEvaluationMethod(basic);
                double result = s->calculatePeriodicScore(idEvaluation);
               // s->addScientistRate(result);
                ui->displayEvaluationResult(result);
                break;
            }
            case 5: {
                int idEvaluation = ui->pickEvaluationMethod();
                Evaluation* advanced = new AdvancedEvaluation();
                s->setEvaluationMethod(advanced);
                double result = s->calculatePeriodicScore(idEvaluation);
                ui->displayEvaluationResult(result);
                break;
            }
            default:
                break;
        }
    }
}



