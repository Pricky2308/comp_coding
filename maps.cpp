#include<iostream>
#include<map>   //Header file
#include<string>

using namespace std;

int main()
{
    map <string,int> M;

    //1. INSERT
    M.insert(make_pair("Mango",20)); //M.insert(expects a pair as an argument)

    pair <string,int> p;
    p.first="Apple";
    p.second=120;
    M.insert(p);

    M["Banana"]=60;

    // 2. SEARCH
    string fruit; cin>>fruit;
    auto it=M.find(fruit);      //find function returns an iterator, while count function returns an integer
    if(it!=M.end())             //here auto = map<string,int> :: iterator
    {
        cout<<"Price of "<<fruit<<" = "<<M[fruit]<<endl;
    }
    else
        cout<<fruit<<" is not present\n";
    //another way to find a particular key

    //map has a property that it stores unique keys only once
    //for eg.

    M["Mango"]=22;
    //Value is updated, new key isn't created
    if(M.count(fruit))              //M.count(pair.first)   returns 1 or 0 if it is present or not present respectively
        cout<<fruit<<" is present\n";
    else
        cout<<fruit<<" not present\n";

    //3. ERASE
    M.erase(fruit);     //expects pair.first i.e the key

    //Iterate over all pairs

    M["Litchi"]=50;
    M["Pineapple"]=55;

    for(auto it=M.begin();it!=M.end();it++)
    {
        cout<<it->first<<":"<<it->second<<endl;         //or (*it).first
    }

    //keys are stored in sorted manner

    //for each loop
    for( each p:M)
    {
        cout<<p.first<<"\t"<<p.second<<endl;
    }




}
