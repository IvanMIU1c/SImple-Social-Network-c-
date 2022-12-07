#ifndef LOGIN_H
#define LOGIN_H
#include "menu2.h"


int mainmenu();

extern string password;
extern string logpass;

void login()
{
    
    ifstream data("database"); 

    if (!data.is_open())
    {
        cout << endl;
        cout << "Сначала вы должны зарегистрироваться!" << endl;
        mainmenu();
    }
     
    cout << endl << "Введите имя пользователя : ";
    getline(cin, logname);  

    cout << "Введите пароль : ";
    getline(cin, logpass); 

    int j;
    while(!data.eof()){
        getline(data, name, '\n');     
        getline(data, password, '\n'); 

        if ( logname == name && logpass == password )
        {
            cout << endl;
            cout << "Вы успешно вошли в систему!" << endl;
            cout << "\e[3mДобро пожаловать, \e[0m" << logname << "\e[3m !\e[0m" << endl;
            menu2();
            break;
        }
        else if (logname != name && logpass == password) {j=1;}
        else if (logname == name && logpass != password) {j=2;}
    }

    if(j==1)
    {
        cout << endl << "Неверное имя пользователя" << endl << "Попробуйте еще раз" << endl;
        login();
    }   
    else if (j==2)
    {
        cout << endl << "Неверный пароль" << endl << "Попробуйте еще раз" << endl;
        login();
    }   
    data.close(); 
}


#endif 
