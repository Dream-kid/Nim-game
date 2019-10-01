#include"header.h"
string output;
char d;
class Cascade
{
    ll data;
public:
    Cascade()
    {
        data=0;
    }
    Cascade & operator+(ll num)///cascading ///binary + operator overloading
    {
        data+=num;
        return *this;///this pointer
    }
    void show()
    {
        d=data;
    }
};
void control()
{
    Cascade a;
    a+2+198+22;///cascade target d=222;
    a.show();
    design1();
    gotoxy(45,5);
    cout<<"HOW TO PLAY";
    gotoxy(44,4);
    for(ll i=1; i<=13; i++)
    {
        cout<<d;
    }
    for(ll i=2; i<=2; i++)
    {
        gotoxy(44,3+i);
        cout<<"|";
        gotoxy(56,3+i);
        cout<<"|";
    }
    gotoxy(44,6);
    char p=207;
    for(ll i=1; i<=13; i++)
    {
        cout<<p;
    }
    ifstream myReadFile;
    myReadFile.open("instruction.txt");///read from a file
    gotoxy(4,8);
    ll cnt=2;
    if (myReadFile.is_open())
    {
        ll total=0;
        while (!myReadFile.eof())
        {
            myReadFile >> output;
            total+=output.size();
            if(total>=74)
            {
                cnt+=2;
                total=0;
                gotoxy(4,6+cnt);
            }
            cout<<output<<" ";
            Sleep(300);
        }
        myReadFile.close();///close a file
    }
    gotoxy(15,17);
    cout<<"Press enter key to continue...";
    getchar();
    getchar();
}
