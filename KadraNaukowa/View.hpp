//
//  view.hpp
//  KadraNaukowa
//
//  Created by Maja Witosz on 12/06/2023.
//

#ifndef View_hpp
#define View_hpp
#include "Scientist.hpp"
#include "Controller.hpp"
/**
 * @file UserInput.hpp
 * @brief Deklaracja klasy UserInput i InputHandler
 */

/**
 * @class UserInput
 * @brief klasa obslugujaca wprowadzanie danych przez uzytkownika i wyswietlanie wynikow
 */
class UserInput {
public:
    /**
     * @brief wyswietla menu poczatkowe i pobiera wybor uzytkownika.
     * @return wybor uzytkownika
     */
    int promptStart();
    /**
     * @brief pobiera dane wprowadzone przez uzytkownika
     * @tparam T typ danych wprowadzanych przez uzytkownika
     * @param prompt komunikat dla uzytkownika
     * @return wprowadzone dane
     */
    template <typename T> T getUserInput(string prompt);
    /**
     @brief wyswietla liste naukowcow
     @param retrivedData wktor naukowcow
     */
    void displayScientists(vector<Scientist> retrivedData);
    /**
     * @brief wyswietla wynik oceny naukowca
     * @param result wynik oceny
      */
    void displayEvaluationResult(double result);
    /**
     * @brief wyswietla liste dziedzin
     * @param retrivedData wektor dziedzin
     */
    void displayFields(vector<Field> retrivedData);
};

/**
 * @class InputHandler
 * klasa obslugujaca wprowadzanie danych przez uzytkownika i sterowanie logika programu
 */
class InputHandler {
    UserInput* userInput; /**< obiekt klasy UserInput */
    Controller* controller; /**< obiekt klasy Controller */
public:
    /**
     * @brief pobiera dane wprowadzone z klawiatury przez uzytkownika
     * @return wprowadzony znak
     */
    char keyboardInput();
    /**
     * @brief obsluguje wprowadzone przez uzytkownika dane
     * @param ui obiekt klasy UserInput
     * @param c obiekt klasy Controller
     */
    void handleInput(UserInput* ui, Controller* c);
    /**
     * @brief obsluguje bledy zwiazane z wprowadzonym ID naukowca
     * @param idInput wprowadzony ID naukowca
     * @param scientists wektor naukowcow
     */
    void errorHandling(int idInput, vector<Scientist> scientists);
};

#endif /* view_hpp */
