#include<bits/stdc++.h>

using namespace std;

class Student{
public:
    string Name;
    int Roll_No;
    Student(string s,int n){
        Name=s;
        Roll_No=n;
    }
    bool operator==(const Student &s)
    {
        return Roll_No==s.Roll_No;
    }
    size_t HashFn (const Student &s)
    {
        return Name.length()+s.Name.length();
    }
};

int main()
{
    unordered_map<Student,int> UM;
    Student s1("Yash",203);
    Student s2("Prar",212);
    UM.insert(make_pair(s1,100));
    UM.insert(make_pair(s2,100));
    return 0;
}
