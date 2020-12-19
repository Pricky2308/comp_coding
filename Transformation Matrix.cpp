#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007

vector<ll> a,b,c;

vector<vector<ll>> multiply( vector<vector<ll>> A, vector<vector<ll>> B )
{
    //The result would be stored in matrix C
    vector<vector<ll>> C(k+1, vector<ll>(k+1));

    for(int i=1;i<=k;i++)
        for(int j=1;j<=k;j++)
        {
            for(int x=1; x<=k;x++)
                C[i][j]= (C[i][j] + (A[i][x]*B[x][j])%MOD)%MOD;
        }
    return C;
}



vector<vector<ll>> pow(vector<vector<ll>> A, ll p)
{
    if(p==1)
    {
        return A;
    }

    if(p&1) //Odd
    {
        return multiply(A,pow(A,p-1));
    }
    else
    {
        vector<vector<ll>> X=pow(A,p/2);
        return multiply(X,X);
    }

}

ll compute(ll n)
{
    if(n==0)    return 0;
    if(n<=k)    return b[n-1];

    //otherwise use matrix exponentiation
    vector<ll> F1(k+1);
    //indexing from 1

    for(int i=1;i<=k;i++)   F1[i]=b[i-1];

    //now build the Transformation matrix
    //Create a vector of vectors
    vector< vector<ll>> T(k+1, vector<ll>(k+1));

    //now let us fill the transformation matrix
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(i<k) //this fills with 1's and 0's in all rows except the last one
                if(j==i+1)
                    T[i][j]=1;
                else
                    T[i][j]=0;
            else
                T[i][j]=c[k-j]; //this fills the coefficients in reverse order just like we needed

        }
    }

    //3 Step
    T=pow(T,n-1);

    //4 Step later
    //only need to multiply one row of T with F1 to get the required result
    ll res=0;
    for(int i=1;i<=k;i++)
        res= (res+ (T[1][i]* F1[i])%MOD)%MOD;
    return res;
}

int main()
{
ll t,n,num;



cin>>t;
while(t--)
{
    int k; cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>num;
        b.push_back(num);
    }
    for(int i=0;i<k;i++)
    {
        cin>>num;
        c.push_back(num);
    }
    cin>>n;
    cout<<compute(n)<<endl;
    b.clear();
    c.clear();
}
}
