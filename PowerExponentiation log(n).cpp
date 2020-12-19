#include<bits/stdc++.h>
using namespace std;

long long int Power(int a, int n)
{

    if(n==0)
        return 1;
    long long int subprob= Power(a,n/2);
    if(n&1)
        return a*subprob*subprob;
    return subprob*subprob;

}

int main()
{
cout<<Power(5,);

}
