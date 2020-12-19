#include<iostream>
using namespace std;

#define ll long long int

ll power(int &a, int b)
{
    //base case
    if(b==0)
        return 1;

    //recursive case = b(is odd or is even)
    int smallerAns=power(a,b/2);
    smallerAns*=smallerAns;

    if(b&1){
        smallerAns*=a;
    }
    return smallerAns;
}
int main()
{
    int a,b;
    cin>>a>>b;

    cout<<power(a,b);

}
