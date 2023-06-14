//
//  logic.hpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 14/06/2023.
//

#ifndef logic_hpp
#define logic_hpp
#include "view.hpp"
#include <stdio.h>

//Wszytsko powiązane z przechowywaniem danych
namespace Model {


class Researcher {
public:
    string name;
    string surname;
public:
    Researcher(string n, string s);
    vector<Researcher> researchers;
    void addResearcher(string n, string s);
    
};

}

//Wszytsko powiązane z logiką
namespace Controller {

class Logic {
   
    View::ResearcherInput* ri;
    Model::Researcher* r;
public:
    Logic(View::ResearcherInput* _ri, Model::Researcher* _r);
    void doLogic();
};
}


//class Storage {
//    int x;
//public:
//    void store(int n);
//    int retrieve();
//};

//class Logic {
//    View::UserInput* ui;
//    Model::Storage* s;
//public:
//    Logic(View::UserInput* _ui, Model::Storage* _s);
//    void doLogic();
//
//};



#endif /* logic_hpp */
