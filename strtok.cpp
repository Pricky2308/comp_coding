#include<iostream>
#include<cstring>   //contains strtok()
using namespace std;

/*
char* strtok(char* s,char* delimiter);
return a token on each subsequent cell
on the first call function should be passed with string argument for s
on subsequent calls we should pass the string argument as NULL
*/

/*HOW DOES IT WORK
strtok() function maintains a static array, which keeps track of how much the
array has been covered till now.
When input is NULL, it simply the returns the next token
When the whole array has been returned in the form of tokens and nothing is left, NULL is returned.
*/

int main()
{
char s[100]="today is a rainy day";

char* Ptr=strtok(s," ");
cout<<Ptr<<endl;    //today


while(Ptr!=NULL)
{
        Ptr=strtok(NULL," ");
        cout<<Ptr<<endl;
}


}
