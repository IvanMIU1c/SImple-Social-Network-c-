#ifndef VIEWMESSAGES_H
#define VIEWMESSAGES_H
#include "goback.h"
#include "message.h"
const int N = 256;
extern string posts;
void viewmessages()
{
    string frend;
    cout << "Введите логин того с кем вы хотите открыть переписку: ";
    cin >> frend;
    string dialog1 = frend + logname;
    char S[N]={""};
        ifstream allposts;      
        allposts.open(dialog1.c_str(), ios::out);
        while(!allposts.eof())
        {
            allposts.getline(S,N);
            cout<<S<<endl;
        }
        allposts.close(); 
        goback();
}

#endif 