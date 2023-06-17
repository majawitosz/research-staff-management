//
//  logic.hpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 14/06/2023.
//

#ifndef Controller_hpp
#define Controller_hpp
#include "View.hpp"
#include "Model.hpp"
#include <stdio.h>
#include <vector>



class Controller {
    UserInput* userInput;
    Data* data;
public:
    char keyboardInput();
    void logic(UserInput* ui, Data* d);
};




//namespace View {
//class ResearcherInput;
//}
//
//namespace Model {
//class Researcher;
//}
//
//Wszytsko powiązane z logiką
//namespace Controller {
//
//class Logic {
//    View::ResearcherInput* ri;
//    Model::Researcher* r;
//public:
//
//    Logic(View::ResearcherInput* _ri, Model::Researcher* _r);
//    void doLogic();
//};
//}


#endif /* logic_hpp */
