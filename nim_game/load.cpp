#include"header.h"
void load()
{
      gotoxy(11,25);
    cout<<"L";
    Sleep(100);
    gotoxy(12,25);
    cout<<"O";
    Sleep(100);
    gotoxy(13,25);
    cout<<"A";
    Sleep(100);
    gotoxy(14,25);
    cout<<"D";
    Sleep(100);
    gotoxy(15,25);
    cout<<"I";
    Sleep(100);
    gotoxy(16,25);
    cout<<"N";
    Sleep(100);
    gotoxy(17,25);
    cout<<"G";
    for(ll i=1; i<=60; i++)
    {
        Sleep(50);
        gotoxy(17+i,25);
        cout<<".";
    }
}