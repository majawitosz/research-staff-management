//
//  model.hpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 14/06/2023.
//

#ifndef Model_hpp
#define Model_hpp
#include "Scientist.hpp"
#include <vector>
using namespace std;

class Data {
    vector<Scientist> scientists;
public:
    void addScientist(vector<string> fni);
    vector<Scientist> retrieveScientists();
    void removeScientist(int id);
    vector<Scientist> retriveRemovedScientists();
};





#endif /* model_hpp */
