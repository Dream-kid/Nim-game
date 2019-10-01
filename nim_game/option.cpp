#include "header.h"
ll arr[100][100];
ll total;
string chara,charb;
ll money;
ll max1;
bool mark14;
class String
{
    char *name;
    ll length;
public:
    String()///constructor
    {
        length=0;
        name=new char[length+1];///Dynamic memory allocation
    }
    String(char *s)
    {
        length=strlen(s);
        name=new char[length+1];///Dynamic memory allocation
        strcpy(name,s);
    }
    String (String &a,String &b)///copy constructor
    {
        length=a.length+b.length;
        name=new char[length+10];///Dynamic memory allocation
        strcpy(name,a.name);
        char str[]=" ";
        strcat(name,str);
        strcat(name,b.name);
        delete a.name;
        delete b.name;
    }
    void replac(String &a,String &b)
    {
        chara="";
        charb="";
        ll cnt=7;
        length=strlen(a.name);
        for(ll i=0; i<min(cnt,length); i++)
            chara+=a.name[i];
        length=strlen(b.name);
        for(ll i=0; i<min(cnt,length); i++)
            charb+=b.name[i];
        delete a.name;
        delete b.name;
    }
    ~String()///destructor
    {
        delete name;
    }
};
///functor work as function
/// by overloading "operator ()" in some class
class less14
{
    ll val;
public:
    less14() {}
    less14(ll val1):val{val1} {}
    ll operator()(ll val1)
    {
        return val1-=val;///functor can return val;
    }
};
class base
{
public:
    char c=222;
    virtual void attack() {}///Polymorphism use of virtual function
};
class item:public base///inheritance we can use c from base class to item class
{
    ll cost;
public:
    void setdata(ll,ll);///setter function
    void getdata(ll,ll);///getter function
    void checkdata(ll,ll);
    void attack()///Polymorphism
    {
        gotoxy(45,6);
    }
};
class lol:public base///inheritance we can use c from base class to item class
{
    ll temp;
    void attack()///Polymorphism
    {
        gotoxy(7,22);
    }
};
void item::getdata(ll i,ll po)///member function
{
    cout<<"NEW GAME";
    gotoxy(27,10+i+po+1);
    cout<<c<<" Enter a number between(From 0 To 7) for pile no "<<i<<": ";
    cin>>cost;
}
void item::checkdata(ll i,ll po)///member function
{
    if(cost<0||cost>7)
    {
        gotoxy(27,10+i+po+2);
        cout<<c<<" INVALID VALUE!!";
        gotoxy(27,10+i+po+3);
        cout<<c<<" Press enter key to continue..";
        getchar();
        getchar();
        design1();
        mark14=false;
    }
}
void item::setdata(ll i,ll po)///member function
{
    arr[i][cost+1]=-1;
    max1=max(max1,cost);
}
bool omit(ll pile,ll val)///non member function
{
    ll cnt=1;
    for(ll i=1; arr[pile][i]!=-1; i++)
    {
        cnt++;
    }
    cnt-=val;
    if(cnt<=0)
        return 0;
    arr[pile][cnt]=-1;
    return 1;
}
void option()
{
    char mo1[100],mo2[100];
    memset(arr,0,sizeof arr);
    money=10000;
    less14 func(100);///functor call init it save 100
    design1();
    gotoxy(14,10);
    string c="=>";
    cout<<c<<" Press 2 for read tutorial.";
    gotoxy(14,8);
    cout<<c<<" Press 1 for play new game";
    gotoxy(14,12);
    cout<<c<<" Press 3 for history";
    gotoxy(14,14);
    cout<<c<<" Press 4 for exit the game.";
    gotoxy(14,16);
    ll temp;
    cout<<c<<" Enter your choice:";
    cin>>temp;
    if(temp==2)
    {
        load();
        control();
        option();
    }
    else if(temp==3)
    {
        load();
        history();
    }
    else if(temp!=1)
    {
        load();
        design1();
        gotoxy(30,8);
        cout<<c<<" Are you sure you want to exit this game ";
        char p;
        cout<<"press(y/n)";
        gotoxy(30,10);
        cout<<c<<" Enter your Choice:";
        cin>>p;
        load();
        if(p=='n')
            option();
        else
        {
            system("cls");
            exit (EXIT_FAILURE);
        }
    }
    load();
    ll a;
    ll val;
    design1();
    gotoxy(45,6);
    cout<<"NEW GAME";
    gotoxy(27,9);
    cout<<c<<" Enter mode:"<<endl;
    gotoxy(27,11);
    cout<<c<<" Press 1 for Pc vs Player:"<<endl;
    gotoxy(27,13);
    cout<<c<<" Press 2 for Player1 vs Player2:"<<endl;
    gotoxy(27,15);
    cout<<c<<" Please enter your choice:";
    ll pc=0;
    stringstream st;///use of stringstream
    string str;
    cin.ignore (numeric_limits<streamsize>::max(),'\n');///getline after cin
    getline(cin,str);
    st<<str;
    st>>pc;
    load();
    design1();
    gotoxy(45,6);
    cout<<"NEW GAME";
    gotoxy(27,9);
    if(pc==1)
    {
        cout<<"Please enter player name(max 6 char will count)"<<endl;
    }
    else
        cout<<"Please enter two player names(max 6 char will count)"<<endl;
    gotoxy(27,10);
    char f='_';
    for(ll i=1; i<=30; i++)
        cout<<f;
    gotoxy(27,12);
    cout<<c<<" Name of the Player1(first part):";
    cin>>mo1;
    gotoxy(27,14);
    cout<<c<<" Name of the Player1(last part):";
    cin>>mo2;
    char *level1=mo1,*level2=mo2;
    String ptr1(level1),ptr2(level2),ptr5;
    String ptr3(ptr1,ptr2);///copy constructor
    gotoxy(27,16);
    if(pc!=1)
    {
        cout<<c<<" Name of the Player2(first part):";
        cin>>mo1;
        gotoxy(27,18);
        cout<<c<<" Name of the Player2(last part):";
        cin>>mo2;
    }
    char *level3=mo1,*level4=mo2;
    String  ptr7(level3),ptr8(level4);
    String  ptr4(ptr7,ptr8);///copy constructor
    ptr5.replac(ptr3,ptr4);
    String();///destructor calling
    if(pc==1)
        charb="pc";
    load();
read:
    design1();
    gotoxy(45,6);
    cout<<"NEW GAME";
    gotoxy(27,9);
    cout<<c<<" How menter numbers of pile there will be?"<<endl;
    gotoxy(27,11);
    cout<<c<<" Enter a value between(From 1 To 6): ";
    cin>>total;
    if(total<=0||total>=7)
    {

        gotoxy(45,6);
        design1();
        gotoxy(27,11);
        cout<<c<<" INVALID VALUE!!";
        gotoxy(27,12);
        cout<<c<<" Press enter key to continue..";
        getchar();
        getchar();
        goto read;
    }
    item fog,tot;
    lol mon;
    base *enemy1=&tot;///pointer in class
    base *enemy2=&mon;///pointer in class
    ll po=2;
    for(ll i=1; i<=total; i++)
    {
read1:
        enemy1->attack();///pointer in class
        fog.getdata(i,po);
        mark14=true;
        fog.checkdata(i,po);
        if(!mark14)
            goto read1;
        fog.setdata(i,po);
        po++;
    }
    ll type=1;
    while(1)
    {
        load();
        ll pile,val;
read2:
        if(!print(type))
            break;
        enemy2->attack();///pointer in class
        if(type)
        {
            cout<<c<<" Enter pile no :";
            cin>>pile;
        }
        else if(pc==2)
        {
            cout<<c<<" Enter pile no :";
            cin>>pile;
        }
        if(!type&&pc==1)
        {
            pc_mod();
        }
        else
        {
            if(pile>total||pile<=0)
            {
                design1();
                gotoxy(27,11);
                cout<<c<<" INVALID VALUE!!";
                gotoxy(27,12);
                cout<<c<<" Press enter key to continue..";
                getchar();
                getchar();
                goto read2;
            }
            if(arr[pile][1]==-1)
            {
                design1();
                gotoxy(27,11);
                cout<<c<<" Pile is already Empty!!";
                gotoxy(27,13);
                cout<<c<<" Press enter key to continue..";
                getchar();
                getchar();
                goto read2;
            }
read3:
            gotoxy(7,24);
            cout<<c<<" How menter elements do you want to remove from pile no "<<pile<<"? :";
            cin>>val;
            ll o=0;
            if(val>0)
                o=omit(pile,val);
            if(!o)
            {
                design1();
                gotoxy(27,11);
                cout<<c<<" INVALID VALUE!!";
                gotoxy(27,13);
                cout<<c<<" Press enter key to continue..";
                getchar();
                getchar();
                print(type);
                goto read3;
            }
        }
        type=1-type;
        if(type)
            money=func(money);///functor
    }
    gotoxy(26,15);
    cout<<c<<" Press enter key to continue..";
    getchar();
    getchar();
    load();
    option();
}


