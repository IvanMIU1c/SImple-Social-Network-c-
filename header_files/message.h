#ifndef MESSAGE_H
#define MESSAGE_H
#include "viewmessages.h"
#include "menu2.h"
#include "goback.h"

void message()
{
        string message;
        string recipient;
        cout << "Введите имя получателя: ";
        cin >> recipient;
        string dialog = recipient + logname;
        string dialog2 = logname + recipient;
        ofstream newMessage(dialog.c_str(), ios::app);
        cout << "Напишите ваше сообщение :" << endl;
        cin.ignore();
        getline(cin, message);
        newMessage << logname << ": " << message << '\n';
        newMessage.close();
        ofstream newMessage2(dialog2.c_str(), ios::app);
        newMessage2 << logname << ": " << message << '\n';
        newMessage2.close();
        menu2();
    }

#endif 
