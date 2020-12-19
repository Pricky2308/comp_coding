#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

vector<int> b,c;
int k;

int compute(int n)
{
    if(n==0)    return 0;
    if(n<=k)    return b[n];

    vector<int> F1(k+1);


}

int main()
{
    cin>>k;
    b.reserve(k+1); c.reserve(k+1);
    rep(i,1,k+1)    cin>>b[i];
    rep(i,1,k+1)    cin>>c[i];

    int n; cin>>n;
    cout<<compute(n); //returns the nth term

    return 0;
}
