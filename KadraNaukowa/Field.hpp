//
//  Field.hpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 20/06/2023.
//

#ifndef Field_hpp
#define Field_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <random>
using namespace std;

/**
 * @file Field.hpp
 * @brief Deklaracja klasy Field
 */

/**
 * @class Field
 * @brief reprezentuje dziedzine naukowa
 */
class Field {
    string name; /**< nazwa dziedziny */
    string description; /**< opis dziedziny */
    int avgPoints; /**< srednia ilosc punktow w czasopismach naukowych */
    int idF; /**< id dziedziny */
    static int fieldsCreated; /**< ilosc utworzonych dziedzin */
public:
    /**
     * @brief Konstruuje nowy obiekt klasy Field.
     * @param n nazwa dziedziny
     * @param d opis dziedziny
     * @param a srednia liczba punktow
     * @param i ID dziedziny
     */
    Field(string n = "Mathematics", string d ="text", int a = 10, int i = 0);
    /**
     * @brief pobiera nazwę dziedziny
     * @return nazwa dziedziny
     */
    string fieldGetName();
    /**
     * @brief pobiera opis dziedziny
     * @return opis dziedziny
     */
    string fieldDescription();
    /**
     * @brief pobiera ilosc punktow dziedziny
     * @return srednia ilosc punktow dziedziny
     */
    int fieldGetPoints();
    /**
     * @brief pobiera ID dziedziny
     * @return ID dziedziny
     */
    int getIdF();
};

#endif /* Field_hpp */
