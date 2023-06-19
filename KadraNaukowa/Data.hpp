//
//  model.hpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 14/06/2023.
//

#ifndef Data_hpp
#define Data_hpp
#include "Scientist.hpp"


class Data {
    vector<Scientist> scientists;
    
public:
    void addScientist(string name, string surname);
    vector<Scientist> retrieveScientists();
    void removeScientist(int id);
    vector<Scientist> retriveRemovedScientists();
};





#endif /* data_hpp */
