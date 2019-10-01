#include"header.h"
ll cnt;
void call()
{
    gotoxy(30,5+cnt);
    cnt++;
    if(cnt%3==0)
    {
        cout<<"=> ";
        cnt++;
    }
}
void history()
{
    cnt=1;
    design1();
    gotoxy(46,4);
    cout<<"GAME HISTORY";
    string input;
    ifstream fin("high_score.txt");///read from a file
    vector<string>numbers;///use of stl
    stack<string>st;///use of stl
    while(getline(fin,input))
    {
        st.push(input);
    }
    fin.close();
    ll cnt1=0;
    while(!st.empty())
    {
        string u1=st.top();
        st.pop();
        if(u1=="")
            continue;
        if(!st.empty())
        {
            string u2=st.top();
            st.pop();
            numbers.push_back(u2);
        }
        numbers.push_back(u1);
        cnt1++;
        if(cnt1==5)
            break;
    }
    for_each(numbers.begin(), numbers.end(), [] (string y) ///lambda function
    {
        Sleep(400);
        call();
        cout<<y<<endl;
    });
    gotoxy(26,23);
    char c=222;
    cout<<c<<" Press enter key to continue..";
    getchar();
    getchar();
    load();
    option();
}
