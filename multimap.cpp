#include<iostream>
#include<map>       //same header file
using namespace std;

//SELF BALANCING BST

int main()
{
    //how is it different from map ?

    //can contain multiple keys that are same

    multimap <char,string> m;
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        char ch; string s;
        cin>>ch>>s;
        m.insert(make_pair(ch,s));
    }

    /*
    7
    b batman
    a apple
    b boat
    a angry
    c cat
    d dog
    e elephant
    */

    //try to print the entire map
    for(auto p:m)
    {
        cout<<p.first<<"->"<<p.second<<endl;
    }

    auto it=m.begin();
    m.erase(it);        //expects a pointer as argument. Why ? because multiple keys exist that are same

    auto it1=m.lower_bound('b');    //batman
    auto it2=m.upper_bound('d');    //elephant
    for(auto it4=it1;it4 !=it2;it4++){
        cout<<it4->second<<endl;
    }

    //search and delete cat
    auto f=m.find('c');
    if(f->second=="cat")
        m.erase(f);






}
