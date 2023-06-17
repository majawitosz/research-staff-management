//
//  logic.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 14/06/2023.
//

#include "Controller.hpp"
//#include <unistd.h>
//
//
//char Controller::keyboardInput(){
//    char keyInput;
//    system("stty raw");
//    keyInput = getchar();
//    system("stty cooked");
//    return keyInput;
//}

void Controller::logic(UserInput* ui, Data* d){
    int input = ui->promptStart();
    
    while (input != 0) {
        switch (input) {
            case 1: {
                string name = ui->getName();
                string surname = ui->getSurname();
                d->addScientist(name, surname);
                break;
            }
            case 2: {
                vector<Scientist> retrivedData = d->retrieveScientists();
                ui->displayScientists(retrivedData);
                break;
            }
            case 3: {
                int IDinput = ui->pickScientistDelete();
                d->removeScientist(IDinput);
                break;
            }
            default:
                break;
        }
    }
}
                    
//    int input = ui->promptStart();
//    if (input == 1){                //add scientist
//        string name = ui->getName();
//        string surname = ui->getSurname();
//        d->addScientist(name, surname);
//    } else if (input == 2){         //display scientists
//        vector<Scientist> retrivedData = d->retrieveScientists();
//        ui->displayScientists(retrivedData);
//    } else if (input == 3) {        //remove scientist
//        int IDinput = ui->pickScientistDelete();
//        d->removeScientist(IDinput);
//    }
//




    


