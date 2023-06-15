//
//  logic.hpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 14/06/2023.
//

#ifndef Logic_hpp
#define Logic_hpp
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;


namespace View {
class ResearcherInput;
}

namespace Model {
class Researcher;
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







#endif /* logic_hpp */
