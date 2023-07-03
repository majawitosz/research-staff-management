//
//  Scientist.hpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 12/06/2023.
//

#ifndef Scientist_hpp
#define Scientist_hpp
#include "Field.hpp"
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <random>
using namespace std;

/**
 * @file Scientist.hpp
 * @brief Deklaracja klasy naukowiec i wybór algorytmu oceny naukowca
 */

/**
 * @class Scieientist
 * @brief reprezentuje naukowca
 */
class Scientist {
    string name; /**< imie naukowca */
    string surname; /**< nazwisko naukowca */
    static int usersCreated; /**< ilosc utworzonych naukowcow */
    int id; /**< ID naukowca */
    Field* field; /**< dziedzina do jakiej nalezy naukowiec */
public:
    /**
     * @brief Konstruktor klasy Scientist
     * @param n imie naukowca
     * @param s nazwisko naukowca
     * @param f dziedzina naukowca
     * @param i ID naukowca
     */
    Scientist(string n = "John", string s = "Smith", Field* f = nullptr, int i = 0);
    /**
     * @brief zwraca imie naukowca
     * @return imie naukowca
     */
    string getNameScientist();
    /**
     * @brief zwraca nazwisko naukowca
     * @return nazwisko naukowca
     */
    string getSurnameScientist();
    /**
     * @brief zwraca ID naukowca
     * @return ID naukowca
     */
    int getId();
    /**
     * @brief zwraca dziedzine naukowca
     * @return dziedzina naukowca
     */
    string getFieldName();
};

/**
 * @class Evaluation
 * @brief klasa wirtualna umozliwiajaca wybor algorytmu oceny dla konkretnego naukowca
 */
class Evaluation {
public:
    /**
     *@brief metoda wirtualna umozliwiajaca wybor algorytmu oceny dla konkretnego naukowca
     *@param scientist obiekt klasy Scientist, naukowiec dla ktorego ma byc obliczona ocena
     */
    virtual double calculateRating(Scientist& scientist) = 0;
};

/**
 * @class BasicEvaluation
 * @brief zawiera metdoe oblicznia podstawowej oceny naukowca
 */
class BasicEvaluation :public Evaluation {
public:
    /**
     *@brief metoda zwracajaca podstawowa ocene naukowca
     *@param scientist obiekt klasy Scientist, naukowiec dla ktorego ma byc obliczona ocena
     *@return podstawowa ocena naukowca
     */
    double calculateRating(Scientist& scientist);
};

/**
 * @class AdvancedEvaluation
 * @brief zawiera metdoe oblicznia poglebionej  oceny naukowca
 */
class AdvancedEvaluation :public Evaluation {
public:
    /**
     *@brief metoda zwracajaca poglebiona ocene naukowca
     *@param scientist obiekt klasy Scientist, naukowiec dla ktorego ma byc obliczona ocena
     *@return poglebiona ocena naukowca
     */
    double calculateRating(Scientist& scientist);
};

#endif /* Scientist_hpp */
