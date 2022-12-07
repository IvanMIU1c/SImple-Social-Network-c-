#ifndef MENU2_H
#define MENU2_H
#include "message.h"
#include "exxit.h"
#include "viewmessages.h"

int mainmenu();
void message();

void menu2()
{
    cout << endl << "\e[3m(Введите номер вашего выбора)\e[0m" << endl;
    cout << "[1] Отправить сообщение" << endl;
    cout << "[2] Открыть переписку" << endl;
    cout << "[7] Назад" << endl;
    cout << "[8] Разлогиниться" << endl;
    cout << "[9] Выйти из программы" << endl;
    cout << endl;

    int menuChoice;
    cout << "Выберите : ";
    cin >> menuChoice; 
    switch (menuChoice)
    {
        case 1:
            message();
            break;
        case 2:
            viewmessages();
            break;    
        case 7:
            mainmenu();
            break;
        case 8:
            cout << "Вы успешно разлогинились" << endl;
            mainmenu();
            break;
        case 9:
            exxit();
            break;
    }
}


#endif 
