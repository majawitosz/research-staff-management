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
    vector<Researcher> researchers;
    Researcher(string n, string s);
    void addResearcher(string n, string s);
    vector<Researcher> retrieveResearchers();
    
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





#endif /* logic_hpp */
