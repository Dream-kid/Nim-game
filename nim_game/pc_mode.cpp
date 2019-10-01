#include"header.h"
extern ll arr[100][100];
extern ll total;
class tem
{
public:
    string c;
    friend void prin1(tem);///friend function
    friend void prin2(tem,ll);///friend function
};
void prin1(tem op)
{
    cout<<op.c<<" Pile no choose by pc is : ";
}
void prin2(tem op,ll i)
{
    cout<<op.c<<" Elements remove from pile no "<<i<<" by pc is : ";
}
void pc_mod()
{
    tem t;
    t.c="=>";
    ll sum=0;
    gotoxy(7,22);
    prin1(t);
    for(ll i=1; i<=total; i++)
    {
        ll j;
        for(j=0; arr[i][j]!=-1; j++) {}
        j--;
        sum^=j;
    }
    if(sum!=0)
    {
        for(ll i=1; i<=total; i++)
        {
            ll j;
            for(j=0; arr[i][j]!=-1; j++) {}
            j--;
            if((sum^j)<j)
            {
                cout<<i;
                Sleep(1000);
                gotoxy(7,24);
                prin2(t,i);
                arr[i][(sum^j)+1]=-1;
                ll val=j-(sum^j);
                cout<<val;
                Sleep(1000);
                break;
            }
        }
    }
    else
    {
        for(ll i=1; i<=total; i++)
        {
            ll j;
            for(j=0; arr[i][j]!=-1; j++) {}
            j--;
            if(j!=0)
            {
                cout<<i;
                Sleep(1000);
                gotoxy(7,24);
                prin2(t,i);
                Sleep(1000);
                arr[i][1]=-1;
                cout<<j;
                break;
            }
        }
    }
}
