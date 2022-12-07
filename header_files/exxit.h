#ifndef EXXIT_H
#define EXXIT_H
#include <iostream>
#include <fstream>
#include <unistd.h>
using namespace std;

extern string logname;

int exxit()
{
    cout << endl << "Завершение программы..." << endl;
    usleep(1000000); 
    cout << "Спасибо "+logname+" !" << endl;
    return 0;
}


#endif 
