#include"header.h"
typedef struct
{
    int dd,mm,yy;
} Date;
COORD coord = {0, 0}; /// sets coordinates to 0,0
void gotoxy (int x, int y)
{
    coord.X = x;
    coord.Y = y; /// X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void  delay(unsigned int mseconds)
{
    clock_t goal=mseconds+clock();
    while (goal>clock());
}
int Time()
{
    char dest[50];
    time_t t;
    struct tm *tm;
    char pm[3],HH[3],MM[3],SS[3];
    t=time(NULL);
    tm=localtime(&t);
    strftime(dest,50,"%I %M %S %p",tm);
    sscanf(dest,"%s %s %s %s",&HH,&MM,&SS,pm);
    printf("Time: %s:%s:%s %s\n",HH,MM,SS,pm);
}
int date()
{
    char dest[50];
    time_t t;
    struct tm *tm;
    int dd,mm,yy;
    t=time(NULL);
    tm=localtime(&t);
    strftime(dest,50,"%d %m %y",tm);
    sscanf(dest,"%d %d %d",&dd,&mm,&yy);
    printf("Date: %d/%d/%d\n",dd,mm,yy);
}
namespace first ///use of namespace
{
    ll val = 240;
}
void design1()
{
    system("cls");
    system("COLOR 2F");
    gotoxy(0,0);
    int i;
    for(i=0; i<=100; i++)
        pf("\xdb");
    gotoxy(1,1);
    printf("\xdb");
    char d=176;
    char c=first::val;///use of namespace
    for(i=1; i<27; i++)
    {
        gotoxy(0,i);
        cout<<d<<endl;
        gotoxy(1,i);
        cout<<c<<endl;
    }

    for(i=1; i<27; i++)
    {
        gotoxy(99,i);
        cout<<c<<endl;
        gotoxy(100,i);
        cout<<d<<endl;
    }
    gotoxy(0,27);
    for(i=0; i<=100; i++)
        pf("\xdb");
    gotoxy(2,26);
    Time();
    gotoxy(84,26);
    date();
    gotoxy (2,2);
    string temp="WELCOME TO THE NIM GAME",dummy1,dummy2,dummy3,dummy4,dummy5;
    stringstream c1(temp);///use of stringstream
    c1>>dummy1;
    c1>>dummy2;
    c1>>dummy3;
    c1>>dummy4;
    c1>>dummy5;
    ///formated printing
    cout<<setw(45)<<dummy1<<" "<<dummy2<<" "<<dummy3<<" "<<dummy4<<" "<<dummy5;
    int o=97;
    gotoxy(2,3);
    char k=193;
    cout<<setfill(k)<<setw(97)<<k<<setfill(' ')<<endl;
}
