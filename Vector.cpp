#include<iostream>
#include<vector>
using namespace std;;

#define rep(i,a,b) for(int i=a;i<b;i++)

int main()
{

    //CREATE
vector<int> a;
vector<int> b(5,10); //five integers which will have the value of 10
vector<int> c(b.begin(),b.end());   //copying the whole b vector to c
//vector<int> d{1,2,3,4,5,10};    //giving the values in the vector directly

    //ITERATING OVER THE VECTOR
  for(int i=0;i<c.size();i++)
    cout<<c[i]<<' ';
  cout<<endl;

  for(vector<int>::iterator it=b.begin(); it!=b.end();it++)  // auto = vector<int>::iterator
    cout<<*it<<',';
  cout<<endl;

  /*for(int x:b)
    cout<<x<<endl;*/

//FUNCTIONS
vector<int> V;
for(int i=1;i<=5;i++)
    V.push_back(i);
cout<<V.size()<<endl;
cout<<V.capacity()<<endl<<endl;

vector<int> Compare(5,10);
cout<<Compare.size()<<endl; //same as size of V
cout<<Compare.capacity()<<endl; // unequal with that of V. V.capacity()=8. Compare.capacity()=5.

vector<int> K(Compare.begin(),Compare.end());
K.push_back(16);

//pop_back
K.pop_back();

rep(i,0,K.size())    cout<<K[i]<<',';
cout<<endl;
    //INSERT IN THE MIDDLE
K.insert(K.begin()+3,100);
rep(i,0,K.size())    cout<<K[i]<<',';
cout<<endl;
K.insert(K.begin(),200);
K.insert(K.begin()+1,3,50); //inserts 3 integers with values 50, starting from the 2nd element in the vector
//insert() function inserts at the location where the iterator is pointing at.
//In this case, 200 will occur at the beginning of the vector
rep(i,0,K.size())    cout<<K[i]<<',';
cout<<endl;


    //ERASE SOME ELEMENT IN THE MIDDLE
K.erase(K.begin());
rep(i,0,K.size())    cout<<K[i]<<',';
cout<<endl;
K.erase(K.begin()+3);
rep(i,0,K.size())    cout<<K[i]<<',';
cout<<endl;
//deletes at the exact location at which the iterator is pointing to
//Deleting a range of elements
K.erase(K.begin(),K.begin()+4); //erases all elements till K.begin()+4. exclusive of integer at K.begin()+4.
rep(i,0,K.size())    cout<<K[i]<<',';
cout<<endl;

K.resize(10);       //does not shrink the size. It can increase the size of vector and fill it with 0's.
rep(i,0,K.size())    cout<<K[i]<<',';
cout<<endl;

//To Clear the vector
K.clear();
//It does not delete the memory which was being used by the vector

//To check if the vector is empty or not
cout<<K.empty()<<endl;

for(int i=1;i<=20;i++)
{
    K.push_back(i);
}

cout<<K.front()<<endl;  //1
cout<<K.back()<<endl;   //20
K.push_back(21);
cout<<"Capacity="<<K.capacity()<<endl;

//IMPORTANT CONCEPT
//doubling of memory is an expensive operation(1. creating new array of double size, 2. copying the first array to the second). How to avoid it?
//use reserve function. for ek.   V.reserve(1000);  makes the vector of size 1000. It will require doubling only when the no. of elements crosses 1000

}
