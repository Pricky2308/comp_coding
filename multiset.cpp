#include<iostream>
#include<set> //contains multiset also
using namespace std;

typedef multiset<int>::iterator It;

/*
MULTISET            -Underlying Implementation: BST
same as set,
but can store multiple instances of the same element
*/

//values inside a set(multi or not) cannot be modified/updated.
//they can be erased or inserted

/*
Associative container -> elements are refered by their values and not
by the index
*/

int main()
{
    int arr[]={10,20,30,20,10,10};
    int n=sizeof(arr)/sizeof(int);
    multiset<int> m(arr,arr+6);

    //erase - 20
    m.erase(20); //removes all occurences of 20

    //insert 80
    m.insert(80);

    cout<<endl;
    //count
    cout<<"Count "<<m.count(10)<<endl;

    //find
    multiset<int>::iterator it= m.find(30);
    //find function will return an iterator to the first occurence
    //of the data

    //Get all elements that are equal to 10
    pair<It,It> p= m.equal_range(10); //returns two iterators

    for(It it=p.first; it!=p.second;it++)
    {
        cout<<*it<<' ';
    }
    cout<<endl;


    cout<<"Present Set\n";
    for(It it=m.begin();it!=m.end();it++)
        cout<<*it<<'-';
    cout<<endl;
    /*
    LOWER BOUND >=
    UPPER BOUND >
    */
    for(It it=m.lower_bound(10); it!=m.upper_bound(30);it++)
        cout<<*it<<' ';
    // m.upper_bound(80) is m.end() because there is  no data greater than 80

}
