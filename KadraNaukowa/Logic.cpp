//
//  logic.cpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 12/06/2023.
//

#include "Logic.hpp"


void Logic::logic(UserInput* ui, Data* d){
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
                d->addScientist(name, surname);
                break;
               
            }
            case 2: {
                vector<Scientist> retrivedData = d->retrieveScientists();
                ui->displayScientists(retrivedData);
                break;
            }
            case 3: {
                vector<Scientist> retrivedData = d->retrieveScientists();
                ui->displayScientists(retrivedData);
                int IDinput = ui->pickScientistDelete();
                d->removeScientist(IDinput);
                break;
            }
            default:
                break;
        }
    }
}
                    





    


