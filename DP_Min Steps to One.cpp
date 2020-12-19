#include<bits/stdc++.h>
using namespace std;

int dp[101]={0};

int Steps(int n)
{
    if(n==1)    return 0;
    if(dp[n]!=0)    return dp[n];

    int Min=INT_MAX;
    if(n%3==0)  Min=min(Min,Steps(n/3));
    if(!(n&1))  Min=min(Min,Steps(n/2));
    Min=min(Min,Steps(n-1));
    return dp[n]=Min+1;
}

int main()
{
    int T; cin>>T;
    dp[1]=0;
    while(T--)
    {
        int n; cin>>n;
        cout<<Steps(n)<<endl;
    }
}
