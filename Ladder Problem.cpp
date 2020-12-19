#include<iostream>
using namespace std;

int ladder_TD(int n,int k,int dp[])
{
    //base case
    if(n==0) return 1;
    //Lookup
    if(dp[n]!=0) return dp[n];
    //Recursive call

    int Sum=0;
    for(int i=1;i<=k;i++)
    {
        if(n-i<0)  break;
        Sum+=ladder_TD(n-i,k,dp);
    }
    //Updation
    return dp[n]=Sum;
}

int Ladder_BU(int n,int k)
{
    int dp[101]={0};
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=100;i++)
    {
        //Filling dp[i]
        for(int j=1;j<=k;j++)
        {
            if(i-j<0) break;
            dp[i]+=dp[i-j];
        }
    }


}

int main()
{

    int dp[101]={0};
    int n,k;
    cin>>n>>k;
    cout<<ladder_TD(n,k,dp);

    return 0;
}
