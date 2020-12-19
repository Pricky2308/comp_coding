#include<bits/stdc++.h>
using namespace std;

//priority queue - underlying data structure is heap

void c_p_c()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
}

int main()
{
    c_p_c();
    cout << "J";
    priority_queue<int> pq; //based out of max heap
    //priority_queue<int, vector<int>, greater<int>> pq; This is a min priority queue
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Hello\n";
        int no;
        cin >> no;
        pq.push(no);

    }

    //Remove elements
    while (!pq.empty())
    {
        cout << pq.top() << ' ';
        pq.pop();
    }
    return 0;
}
