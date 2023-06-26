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
    cout<<"|        PRESS 6: add field        |"<<endl;
    cout<<"|      PRESS 7: display fields     |"<<endl;
    cout<<"|          PRESS 0: exit           |"<<endl;
    cout<<" ----------------------------------"<<endl;
    int input;
    cin>>input;
    return input;
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

void UserInput::displayEvaluationResult(double result){
    cout<<"The result od evaluation is: "<<result<<endl;
}
void UserInput::displayFields(vector<Field> retrivedData){
    cout<<endl;
    cout<<"List of fields: "<<endl;
    for(int i = 0; i<retrivedData.size(); i++){
        cout<<"Name: "<<retrivedData[i].fieldGetName()<<endl;
        cout<<"Description: "<<retrivedData[i].fieldDescription()<<endl;
        cout<<"Average points: "<<retrivedData[i].fieldGetPoints()<<endl;
        cout<<endl;
    }
}
// przenieść do pliku hpp
//specjlizacje w cpp
template <typename T> T UserInput::getUserInput(string prompt){
    cout << prompt;
    T input;
    cin >> input;
    return input;
}

void InputHandler::errorHandling(int idInput, vector<Scientist> scientists){
    bool scientistFound = false;
    try {
        for (int i = 0; i < scientists.size(); i++) {
            if (scientists[i].getId() == idInput) {
                scientistFound = true;
                break;
            }
        }
        if(!scientistFound)
            throw 0;
    }
    catch (int &ex){
        cerr<<"Scientist not found"<<endl;
    }
   
}

void InputHandler::logic(UserInput* ui, Controller* c, Field* f){
    bool exitProgram = false;
    while (!exitProgram) {
        int input = ui->promptStart();
        switch (input) {
            case 0: {
                exitProgram = true;
                break;
            }
            case 1: {
                string name = ui->getUserInput<string>("Name: ");
                string surname = ui->getUserInput<string>("Surname: ");
                c->addScientist(name, surname);
                break;
            }
            case 2: {
                vector<Scientist> retrivedData = c->retrieveScientists();
                ui->displayScientists(retrivedData);
                break;
            }
            case 3: {
                vector<Scientist> retrivedData = c->retrieveScientists();
                ui->displayScientists(retrivedData);
                int IDinput = ui->getUserInput<int>("Enter ID of scientist you want to remove: ");
                errorHandling(IDinput, retrivedData);
                c->removeScientist(IDinput);
                break;
            }
            case 4: {
                int idEvaluation = ui->getUserInput<int>("Choose ID of scientist that you want to calculate rating for: ");
                Evaluation* basic = new BasicEvaluation();
                c->setEvaluationMethod(basic);
                double result = c->calculatePeriodicScore(idEvaluation);
                ui->displayEvaluationResult(result);
                break;
            }
            case 5: {
                int idEvaluation = ui->getUserInput<int>("Choose ID of scientist that you want to calculate rating for: ");
                Evaluation* advanced = new AdvancedEvaluation();
                c->setEvaluationMethod(advanced);
                double result = c->calculatePeriodicScore(idEvaluation);
                ui->displayEvaluationResult(result);
                break;
            }
            case 6: {
                string name = ui->getUserInput<string>("Name of the field: ");
                string description = ui->getUserInput<string>("Give short descrpition of the field: ");
                int avgPoints = ui->getUserInput<int>("What is average amount of points of this field: ");
                f->addField(name, description, avgPoints);
            }
            case 7: {
                vector<Field> retrivedData = f->retriveFields();
                ui->displayFields(retrivedData);
            }
            default:
                break;
        }
    }
}



