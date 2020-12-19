#include<iostream>
using namespace std;

bool isOdd(int n)
{
    return n & 1;
}

int GetBit(int n, int i)
{
    return n & (1 << i);
}

void SetBit(int n, int i)
{
    n = ( n | (1 << i) );
    return n;
}

void ClearBit(int &n, int i)
{
    int mask = 1 << i;
    mask = ~mask;
    n = n & mask;

}

void UpdateBit(int &n, int &i, int &v)
{
    int mask = ~(1 << i);
    n = n & mask;
    n = n | (v << i);
}

int ClearLastIBits(int n, int i)
{
    int mask = (-1) << i; //or mask=(~0)<<i;
    n = n & mask;

    return n;
}

int ClearRange_Of_Bits_i_to_j(int n, int i, int j)
{
    int a = (~0) << (j + 1);
    int b = 1 << i - 1 ;
    int mask = a | b;
    n = n & mask;

    return n;
}

//WAYS TO COUNT SET BITS
int CountSetBits(int n)
{
    int ans = 0;
    while (n)
    {
        n = n & (n - 1);
        ans++;
    }
    return ans;
}

//second way is to just call the builtin function which is: cout<<__builtin_popcount(n); it returns
// the number of set bits. Note: 2 underscores in the name at the beginning.

int DecimaltoBinary(int n)
{
    int ans = 0;
    int p = 1;
    while (n > 0)
    {
        int last_bit = n & 1;
        ans += p * last_bit;
        p *= 10;
        n = n >> 1;
    }

    return ans;
}

void FilterChars(int n, char a[])
{
    int j = 0;

    while (n > 0)
    {
        int last_bit = (n & 1);
        if (last_bit)
        {
            cout << a[j];
        }
        j++;
        n = n >> 1;

    }
}

void PrintSubsets(char a[])
{
    int n = strlen(a);
    for (int i = 0; i < (1 << n); i++)
    {
        FilterChars(i, a);
    }
    return;
}

int main()
{

}
