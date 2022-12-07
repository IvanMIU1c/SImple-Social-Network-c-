#ifndef REGISTRATION_H
#define REGISTRATION_H
#include "login.h"


extern string password;
extern string regname;
extern string regpass;

int registration()
{
    ifstream data("database"); 
	
    cout << endl << "Введите желаемое имя пользователя : ";
    getline(cin, regname); 

	
	while(!data.eof())
	{
		getline(data, name, '\n');     
		getline(data, password, '\n'); 
		while(regname == name)
		{
			 cout << "Такое имя пользователя уже существует. Попробуйте еще раз..." << endl;
			 registration(); 
		}
	}
	data.close(); 
	
    cout << "Введите пароль : ";
    getline (cin, regpass); 

	ofstream newData("database", ios::app);      
	
	ofstream newfile(regname.c_str(), ios::app);        
	newfile.close();
	
	
	newData << regname << '\n';
	newData << regpass << '\n';
	newData.close(); 

	cout << endl;
	cout << regname+", вы успешно зарегистрированы" << endl << endl;
	cout << "Что вы хотите сделать? :" << endl << string(24, '=') << endl;
	cout << "[1] Войти" << endl;
	cout << "[2] Вернуться в главное меню" << endl;
	cout << "[3] Закрыть программу" << endl << endl;
	cout << "Выберите : ";
	
	int regChoice;
	cin >> regChoice;
	cin.ignore();
	
	switch (regChoice)
	{
		case 1:
			login();
			break;
		case 2:
			mainmenu();
			break;
		case 3:
			exxit();
			break;
		default:
			cout << "Неверный выбор! Попробуйте еще раз..." << endl;
			mainmenu();
			break;
	}
    return 0;
}


#endif 