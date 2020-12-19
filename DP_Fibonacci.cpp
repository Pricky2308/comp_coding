#include<iostream>
using namespace std;

int fib(int n, int dp[])
{
    if(n==0 or n==1)    return n;

    //Recursive
    //Look Up
    if(dp[n]!=0)    return dp[n];

    int ans;
    ans=fib(n-1, dp)+fib(n-2, dp);
    return dp[n]=ans;

}

int fib_BU(int n)
{
    int dp[100]={0};
    dp[1]=1;

    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1] + dp[i-2];
    }
    return dp[n];

}

int main()
{
    int T; cout<<"Enter no. of testcases: ";
    cin>>T;
    while(T--){
    int n;
    cout<<"Enter n: "; cin>>n;
    cout<<fib_BU(n)<<endl;
    }
}
