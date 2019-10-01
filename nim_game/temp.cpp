#include"header.h"
extern string chara,charb;
extern ll money;
void save(ll type)
{
    ofstream fout("high_score.txt",ofstream::out | ofstream::app);///write in a file and append
    fout<<endl<<"Match Between"<<": "<<chara<<" Vs "<<charb<<endl;
    if(type)
    {
        fout<<"Winner is "<<chara;
    }
    else
        fout<<"Winner is "<<charb;
    fout<<"-> Earn "<<money<<"$"<<endl;
    fout.close();///file close
}
