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

//Wszytsko powiązane za przechowywaniem danych
namespace Model {

class Storage {
    int x;
public:
    void store(int n);
    int retrieve();
};

}

//Wszytsko powiązane z logiką
namespace Controller {
class Logic {
    View::UserInput* ui;
    Model::Storage* s;
public:
    Logic(View::UserInput* _ui, Model::Storage* _s);
    void doLogic();
    
};
}


#endif /* logic_hpp */
