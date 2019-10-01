#include"header.h"
extern ll arr[100][100];
extern ll total;
extern string chara,charb;
extern ll money;
extern ll max1;
template<typename T>///template
class node
{
    T cnt;
public:
    void setdata(T cnt)
    {
        this->cnt=cnt; /// The 'this' pointer is used to retrieve the object's cnt
        /// hidden by the local variable cnt
    }
    friend ostream& operator<<(ostream& cout,node &temp)///<<operator overload
    {
        cout<<temp.cnt;
        return cout;
    }
    operator -()///- operator overload
    {
        cnt-=50;
    }
};
bool print(ll type)
{
    node<ll>m1;///use of template
    node<char>m2;///use of template
    design1();
    gotoxy(19,4);
    char d;
    d=222;
    m2.setdata(d);
    for(ll i=1; i<=52; i++)
        cout<<m2;///<< operator overload
    gotoxy(30,5);
    cout<<"Current state of all the pile"<<endl;
    gotoxy(20,6);
    for(ll i=1; i<=51; i++)
        cout<<m2;///<< operator overload
    gotoxy(23,7);
    if(type)
        cout<<chara<<"'s turn("<<chara<<" can still win "<<money<<"$)"<<endl;
    else
        cout<<charb<<"'s turn("<<charb<<" can still win "<<money<<"$)"<<endl;
    gotoxy(20,8);
    for(ll i=1; i<=51; i++)
        cout<<m2;///<< operator overload
    for(ll i=1; i<=4; i++)
    {
        gotoxy(19,4+i);
        cout<<m2;///<< operator overload
        gotoxy(70,4+i);
        cout<<m2;///<< operator overload
    }
    gotoxy(6,9);
    d=194;
    m2.setdata(d);
    for(ll i=1; i<=90; i++)
    {
        cout<<d;///<< operator overload
    }
    ll k=15;
    bool mark=false;
    for(ll j=1; j<=total; j++)
    {
        ll cnt=0;
        for(ll i=1; arr[j][i]!=-1; i++)
            cnt++;
        ll temp=5;
        temp-=cnt;
        d=254;
        m1.setdata(cnt);
        m2.setdata(d);
        for(ll i=temp; i<=cnt+temp; i++)
        {
            gotoxy(k,i+max1+6);
            if(i==cnt+temp)
            {
                gotoxy(k-4,i+max1+6);
                if(cnt==0)
                    cout<<"EMPTY!"<<endl;
                else
                    cout<<"Amount:"<<m1<<endl;
                gotoxy(k-4,i+max1+7);
                cout<<"Pile no:"<<j<<endl;
            }
            else
            {
                cout<<m2<<endl;///<< operator overload
                mark=true;
            }
        }
        k+=14;
    }
    gotoxy(6,20);
    d=193;
    m2.setdata(d);
    for(ll i=1; i<=90; i++)
    {
        cout<<m2;///<< operator overload
    }
    d=222;
    char m=186;
    for(ll i=10; i<=19; i++)
    {
        gotoxy(6,i);
        cout<<m;///<< operator overload
        gotoxy(95,i);
        cout<<m;///<< operator overload
    }
    d='[';
    ll ok=0;
    for(ll i=1; i<6; i++)
    {
        for(ll j=1; j<=10; j++)
        {
            gotoxy(19+i+ok-i+3,9+j);
            cout<<d<<endl;
            gotoxy(19+i+ok-i+4,9+j);
            if(d=='[')
                cout<<']';
            else
                cout<<'[';
        }
        ok+=14;
    }
    if(!mark)
    {
        cout<<setprecision(4);    ///formated printing
        design1();
        gotoxy(30,12);
        if(type)
            cout<<charb<<" is the Winner (earn ";
        else
            cout<<chara<<" is the Winner (earn ";
        m1.setdata(money);
        -m1;///- operator overload
        cout<<m1<<"$)"<<endl;
        money-=50;
        save(1-type);
    }
    return mark;
}
