#include<iostream>
#include<list>
using namespace std;

//DOUBLY LINKED LIST

void Print(list<string> L)
{
    list<string>::iterator S=L.begin();
    while(S!=L.end())
    {
        cout<<*S<<"-->";
        S++;
    }
    cout<<endl;
}

int main()
{
    list<int> l;

    //INITIALISE
    //list<int> l1({1,);
    //list<string> l2{"Hey","HI","Apple"};
    list<string> l2;
    l2.push_back("YO");

    l2.sort();
    l2.reverse();

    l2.push_back("HEY");
    l2.push_front("Apple");
    l2.push_front("Pineapple");

    //ITERATE OVER THE LIST AND PRINT THE DATA
    list<string>::iterator S=l2.begin();
    while(S!=l2.end())
    {
        cout<<*S<<"-->";
        S++;
    }
    cout<<'\n';
    cout<<"FRONT = "<<l2.front()<<endl;
    cout<<"After popping from front\n";
    l2.pop_front();
    cout<<"FRONT = "<<l2.front()<<endl;

    l2.push_front("Guava");
    l2.push_back("Guava");
    Print(l2);

    //REMOVE
    l2.remove("Guava"); //all occurence of guava are removed
    Print(l2);

    //INSERTING
    list<string>::iterator It=l2.begin();
    It++;
    l2.insert(It,"YAsh");
    Print(l2);
    //ERASE SOME ELEMENT AT A PARTICULAR INDEX
    //list<string>::iterator It=l2.begin()+1;   this doesnt work because memory storage isn't linear
    //what can you do then ?
    It=l2.begin();
    It++;               //THIS SHALL WORK
    l2.erase(It);
    Print(l2);
}
