#include<iostream>
#include<queue>
using namespace std;

//find the 3 oldest people

//this method is better than sorting. Takes logN time. Sorting takes NlogN time.

class Person{
public:
        string name;
        int age;

        Person(){
        }
        Person(string n,int a)
        {
            name=n;
            age=a;
        }
};

class PersonCompare{
public:
    bool operator()(Person A,Person B){
        cout<<"comparing "<<A.name<<" with "<<B.name<<endl;
    return A.age < B.age;
    }
};

int main()
{
    int n; cin>>n;

    priority_queue<Person, vector<Person>,PersonCompare> pq;

    for(int i=0;i<n;i++)
    {
        string name;
        int age;
        cin>>name>>age;
        Person p(name,age);
        pq.push(p);
    }
    int k=3;
    for(int i=0;i<k;i++){
        Person p=pq.top();
        cout<<p.name<<' '<<p.age<<endl;
        pq.pop();
    }
}
