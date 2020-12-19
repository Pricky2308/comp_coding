#include<iostream>
#include<vector>
using namespace std;

#define MAX 1000000+6

vector<int> PrimeSieve(int *p)
{
  for(int i=3;i<=1000000;i+=2)
  {
      p[i]=1;
  }

}

int main()
{
    cout<<"Hello\n";
vector<int> Prime;
cout<<"vector created\n";
Prime.reserve(MAX/2);
Prime=PrimeSieve();

for(int i=0;i<100;i++)
{
    cout<<"Hey\n";
    cout<<Prime[i]<<' ';
}

}
