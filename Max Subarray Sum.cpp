#include<iostream>
using namespace std;

int MaxSum(int a[],int n){
    int dp[100]={0};
    dp[0]=a[0]>0?a[0]:0;
    int max_so_far=dp[0];

    for(int i=1;i<n;i++){
        dp[i]=dp[i-1]+a[i];
        if(dp[i]<0){
            dp[i]=0;
        }
        max_so_far=max(dp[i],max_so_far);
    }

    return max_so_far;
}

//Space Optimized Code
//Kadane's Algorithm

int MaxSum_SpaceOptimized(int a[], const int &n){
    int current_sum=0;
    int max_so_far=0;

    for(int i=0;i<n;i++){
        current_sum+=a[i];
        if(current_sum<0){
            current_sum=0;
        }
        max_so_far=max(max_so_far,current_sum);
    }
    return max_so_far;
}

int main()
{
    int Arr[]={-3,2,5,-1,6,3,-20,7,-5,2};
    cout<<MaxSum(Arr,sizeof(Arr)/sizeof(int));
    cout<<endl<<MaxSum_SpaceOptimized(Arr,sizeof(Arr)/sizeof(int));
    return 0;
}













