#include<iostream>
using namespace std;

int minCoins(int n, int coins[],int T,int dp[])
{
    if(n==0)
        return 0;
    if(dp[n]!=0)    return dp[n];
    int ans=INT_MAX;
    for(int i=0;i<T;i++)
        if(n-coins[i]>=0)   ans=min(ans,minCoins(n-coins[i],coins,T,dp) +1);
        else break;
    return dp[n]=ans;
}

int minCoins_BU(int N, int coins[],int T)
{
    int dp[100]={0};

    for(int n=1;n<=N;n++)
    {
        dp[n]=INT_MAX;
        for(int i=0;i<T;i++)
            if(n-coins[i]>=0){
                dp[n]=min(dp[n],dp[n-coins[i]]+1);
                cout<<"dp["<<n<<"]: "<<dp[n]<<endl;
            }
            else               break;
    }
    return dp[N];
}

int main()
{
    int Coins[]={1,7,10};
    //int dp[100]={0};
    int T=sizeof(Coins)/sizeof(int);

    int n; cout<<"Enter n: "; cin>>n;
    cout<<minCoins_BU(n, Coins,T);

    return 0;
}
