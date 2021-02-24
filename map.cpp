#include<bits/stdc++.h>
using namespace std;

void COUTM(map<int,int> &A)
{
    map<int,int>::iterator itr;
    for(itr=A.begin();itr!=A.end();itr++)
    {
        cout<<"\t"<<itr->first<<"\t"<<itr->second<<endl;
    }
    cout<<endl;
    return;
}

int main()
{
    map<int, int> M;
    int i; cout<<"Enter i: "; cin>>i;
    for(;i<=10;i++)
    {
        M.insert(pair<int,int>(i,i*10));
    }
    COUTM(M);

    M[4]=5;
    M.insert(pair<int,int>(11,110));
    COUTM(M);

    cout<<"\tM[12]: "<<M[12]<<endl;


    return 0;

}
