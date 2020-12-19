#include<bits/stdc++.h>
using namespace std;

int dp[101]={0};

void FillDP()
{
    for(int i=2;i<=100;i++)
    {
        int Min=INT_MAX;
        if(i%3==0)  Min=min(Min, dp[i/3]);
        if(!(i&1))  Min=min(Min, dp[i/2]);
        Min=min(Min, dp[i-1]);
        dp[i]=Min+1;
    }
}

int main()
{
    FillDP();
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;
        cout<<dp[n]<<' ';

    }
}
