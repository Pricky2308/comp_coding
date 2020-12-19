#include<iostream>
using namespace std;

/*int profit(int wines[], int i, int j,int y,int dp[])
{
    //Base Case
    if(i>j) return 0;
    //Lookup
    if(dp[i][j]!=0)
        return dp[i][j];
    //Recursive Case
    int op1=wines[i]*y + profit(wines,i+1,j,y+1);
    int op2=wines[j]*y + profit(wines,i,j-1,y+1);
    return dp[i][j]=max(op1,op2);
    //Update

}
*/
/*
    We have to fill diagonally.
    So first fix the year. for(int y=W;y>=1;y--)
    Then fix i.     for(int i=0;i<W;i++)
    j depends on the value of i and y.
    This will fill the dp array diagonally

    Complete Later.
*/
int BottumUp(const int &W, int wines[])
{
    int dp[W][W];

    for(int i=0;i<W;i++)
    {
        for(int j=i-1;j>=0;j--)
            dp[i][j]=0;
    }

    for(int y=W;y>=1;y--)
    {
        int wines_left=W-y+1;
        for(int i=0;i<W;i++)
        {
            int j=i+wines_left-1;
            int op1;
            op1=wines[i] * y + dp[i+1,j];
            int op2=wines[j] * y + dp[i,j-1];
            dp[i][j]=max(op1,op2);
        }
    }

    return dp[0,W-1];


}

int main()
{

    //Greedy Approach gives 49
    //int dp[100][100]={0};
    int wines[]={2,3,5};
    int W=3;
    cout<<BottomUp(W,wines);
    /*int n=sizeof(wines)/sizeof(int);
    int y=1;
    cout<<profit(wines,0,n-1,y,dp);
*/
    return 0;
}
