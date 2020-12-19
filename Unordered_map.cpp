#include<iostream>
#include<unordered_map>     //HEADER FILE
using namespace std;

// IT IS AN IMPLEMENTATION OF A HASHTABLE

//can be used when relative ordering between pairs isn't essential
//it is extremely fast. O(1)
int main()
{
    /*
    pairs are not stored in order.
    insert(),erase(), and find() functions are O(1) on average.
    Why on average ? Sometimes it has to do rehashing when load becomes more than the threshold

    */

    unordered_map <string,int> um;
    um.insert(make_pair("Mango",100));

    //rest of the code is Exactly same as that of map (not multi)

}
