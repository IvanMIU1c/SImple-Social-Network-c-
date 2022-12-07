#ifndef LISTUSERS_H
#define LISTUSERS_H
#include <fstream>

using namespace std;

extern string name;
extern string password;

void listusers()
{
    ifstream data;
    data.open("database"); 

    while(!data.eof())
    {
        getline(data, name, '\n');     
        getline(data, password, '\n');
    }
    data.close();
}


#endif 