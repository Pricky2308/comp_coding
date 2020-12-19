#include<iostream>
#include<set>
using namespace std;

//it can store only unique elements
//you cannot update elements: suppose you have to update 3 to 13,
//then  you have to first remove 3, then add 13
// stores in order, by default. unordered_set also exists
// uses BST as underlying data structure. So insertion and deletion
//and searching takes logN time

int main()
{
    int arr[]={10,54,20,3,56,21};
    int n=sizeof(arr)/sizeof(int);

    set<int> s;

    for(int i=0;i<n;i++)
        s.insert(arr[i]);

    for( set<int>::iterator it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<' ';
    }
    cout<<endl;

    //erase function
    s.erase(20);  //sending value
    set<int>::iterator IT=s.find(3);
    s.erase(IT);
    //erase function can accept both value or the iterator as parameter

     for( set<int>::iterator it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<' ';
    }
}
