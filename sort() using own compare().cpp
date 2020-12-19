#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

void Print(string S[],int n)
{
    for(int i=0;i<n;i++)
        cout<<S[i]<<endl;
    cout<<endl;
}

bool COMPARE(string a,string b)
{
    if(a.length()==b.length())  return a<b;

    return a.length()>b.length();
}

int main()
{
string S[100];
S[0]="Apple juice";
S[1]="Banana juice";
S[2]="Mango juice";
sort(S,S+3);

Print(S,3);

sort(S,S+3,COMPARE);
Print(S,3);


}
