
#ifndef MAINMENU_H
#define MAINMENU_H


#include "registration.h"

int mainmenu()
{
    cout << endl << "\e[1mГлавное меню\e[0m" << endl << "\e[3m(Ведите номер вашего выбора)\e[0m" << endl;
    cout << "[1] Зарегистрироваться" << endl;
    cout << "[2] Войти" << endl;
    cout << "[3] Выйти из программы" << endl << endl;


    int choice;
    cout << "Выберите: ";
    cin >> choice; 
    cin.ignore();

    switch (choice)
    {
        case 1:
            registration();
            break;
        case 2:
            login();
            break;
        case 3:
            exxit();
            break;
        default:
            cout << "Неверный выбор! Попробуйте еще раз..." << endl << endl;
            mainmenu();
    }
    return 0;
}


#endif 
