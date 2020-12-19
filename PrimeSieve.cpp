#include<iostream>
#include<vector>
using namespace std;

#define MAX 1000000+5
#define ll long long int

vector<int> PrimeSieve(int* p)
{

    vector<int> Prime;
    Prime.reserve(10000000/2);
    Prime.push_back(2);
    p[0]=p[1]=0;
    p[2]=1;
    for(ll i=3;i<=1000000;i+=2)   p[i]=1;

    for(ll i=3;i<=1000000;i+=2)
    {
        if(p[i]==1)
        {
            Prime.push_back(i);
            for(ll j=i*i;j<=1000000;j=j+i)
                p[i]=0;
        }
    }

    for(ll i=0;i<=100000;i++)
    {
        cout<<p[i]<<' ';

    }

    return Prime;

}

int main()
{
    int A[1000000 + 5]={0};
    vector<int> Prime=PrimeSieve(A);
    //for(int i=0;i<Prime.size();i++) cout<<Prime[i]<<' ';

}
