//
//  view.hpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 12/06/2023.
//

#ifndef View_hpp
#define View_hpp
#include "Data.hpp"


class UserInput {
public:
    int promptStart();
    string getName();
    string getSurname();
    void displayScientists(vector<Scientist> retrivedData);
    int pickScientistDelete();
    
};



#endif /* view_hpp */
