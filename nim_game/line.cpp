#include"header.h"
void front1()
{
    design1();
    gotoxy(30,7);
    cout<<"WELCOME";
    gotoxy(53,7);
    cout<<"WORLD";
    Sleep(500);
    gotoxy(39,7);
    cout<<"TO";
    gotoxy(48,7);
    cout<<"NIM";
    Sleep(500);
    gotoxy(43,7);
    cout<<"THE";
    string str;
    str="=> YOU ARE GOING TO ENTER A WHOLE NEW WORLD!!!";
    gotoxy(27,9);
    for(ll i=0; i<str.size(); i++)
    {
        if(str[i]==' ')
            Sleep(200);
        cout<<str[i];
    }
    str="=> YOU HAVE TO USE YOUR BRAIN IN EVERY STEP OF THIS GAME";
    gotoxy(27,13);
    for(ll i=0; i<str.size(); i++)
    {
        if(str[i]==' ')
            Sleep(200);
        cout<<str[i];
    }
    str="=> YOU WILL HAVE A LOT OF FUN :)";
    gotoxy(27,15);
    for(ll i=0; i<str.size(); i++)
    {
        if(str[i]==' ')
            Sleep(200);
        cout<<str[i];
    }
    str="=> YOU HAVE TO PROVE YOUR SELF HOW SMART YOU ARE !!!";
    gotoxy(27,11);
    for(ll i=0; i<str.size(); i++)
    {
        if(str[i]==' ')
            Sleep(200);
        cout<<str[i];
    }
    str="=> LET THE GAME BEGIN..";
    gotoxy(27,17);
    for(ll i=0; i<str.size(); i++)
    {
        if(str[i]==' ')
            Sleep(200);
        cout<<str[i];
    }
    load();
}
