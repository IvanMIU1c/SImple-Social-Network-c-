#ifndef GOBACK_H
#define GOBACK_H

#include "exxit.h"

void menu2(); 

void goback()
{
    cout << endl << "Вернуться в главное меню? ? (Y/N) : ";
    string choice;
    cin >> choice;

    if(choice=="Y" || choice=="y")
        menu2();
    else
        exxit();
}


#endif 
