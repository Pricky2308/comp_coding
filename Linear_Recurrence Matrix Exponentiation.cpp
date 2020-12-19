/*
First stpe is find out the value of k
 f(n) = f(n-1) + f(n-2)

 f(n) = 1.f(n-1) + 0.f(n-2) + 0.f(n-3) + 1.f(n-4)

 hence k is 4

2. make a matrix k*1 which is the first k values of the sequence

3. find a transformation matrix

make a matrix of size k*k. elements on the diagonal on the right of the
principal diagonal must be 1. these 1s push the element up.
the last row must be ck ck-1, ck-2,.....c2,c1.

on the matrix on the right, it must contain f(i-k),f(i-(k-1)),....,f(i-1)
upar chote terms honge
neeche bade terms

*/




#include<iostream>
using namespace std;

int main()
{


}
