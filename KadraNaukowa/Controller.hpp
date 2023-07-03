//
//  Controller.hpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 25/06/2023.
//

#ifndef Controller_hpp
#define Controller_hpp
#include "Scientist.hpp"
#include <stdio.h>

/**
 * @file Controller.hpp
 * @brief Deklaracja klasy Controller
 */

/**
 * @class Controller
 * @brief zarzadza i pobiera dane  wektorow naukowców i dziedzin
 */
class Controller {
    vector<Scientist> scientists; /**< wektor naukowcow */
    vector<Field> fields; /**< wektor dziedzin */
    Evaluation* evaluation; /**< obiekt klasy Evaluation pozwalajacy na wybor oceny naukowca */
    Field* field; /**< dziedzina przyporzadowana do danego naukowca*/
public:
    /**
     * @brief dodaje naukowca do wektora
     * @param name imie dodawanego naukowca
     * @param surname nazwisko dodawanego naukowca
     * @param field dziedzina dodawanego naukowca
     */
    void addScientist(string name, string surname, Field field);
    /**
     * @brief zwraca wektor naukowcow
     * @return wektor naukowcow
     */
    vector<Scientist> retrieveScientists();
    /**
     * @brief dodaje dziedzine do wektora
     * @param name nazwa dodawanej dziedziny
     * @param description krotki opis dziedziny
     * @param avg srednia liczba punktow w czasopismach naukowych
     */
    void addField(string name, string description, int avg);
    /**
     * @brief zwraca wektor dziedzin
     * @return wektor dziedzin
     */
    vector<Field> retriveFields();
    /**
     * @brief usuwa naukowca z wektora
     * @param id id usuwanego naukowca
     */
    void removeScientist(int id);
    /**
     * @brief ustawia rodzaj algorytmu oceny na ten wybrany przez uzytkownika
     * @param method wybrany rodzaj algorytmu oceny
     */
    void setEvaluationMethod(Evaluation* method);
    /**
     * @brief zwraca ocene naukowca
     * @param id id naukowca dla ktorego ma byc obliczona ocena
     * @return wynik oceny
     */
    double calculatePeriodicScore(int id);
    /**
     * @brief zwraca dziedzine o id podanym przez uzytkownika
     * @param fields wektor dziedzin
     * @param idF id wybranej dziedziny
     * @return dziedzina o podanym id
     */
    Field findField(vector<Field> fields, int idF);
};

#endif /* Controller_hpp */
