#include<bits/stdc++.h>
using namespace std;

#define MAX 1000000 + 5
#define ll long long int

void PrimeSieve(vector<int> &Prime, int* Csum)
{
    Csum[0]=Csum[1]=0;
    Csum[2]=1;
    int A[MAX]={0};


    Prime.push_back(2);
    for(ll i=3;i<=1000000;i+=2)
    {
        if(A[i]==0)
        {
            Csum[i]=Csum[i-1]+1;
            Prime.push_back(i);
            for(ll j=i*i; j<=1000000;j=j+i)
                A[j]=1;
            continue;
        }
        Csum[i]=Csum[i-1];
    }
}

int main()
{
vector<int> Prime;
int Csum[MAX]={0};
Prime.reserve(MAX/2);

PrimeSieve(Prime,Csum);
int n;
do{
    cin>>n;
    cout<<Csum[n]<<'\n';
}while(n!=-1);


}
