#include<iostream>
#include<list>
using namespace std;

void PRINT(list<int> L)
{
    list<int>::iterator It=L.begin();
    while(It!=L.end())
    {
        cout<<*It<<' ';
        It++;
    }
    cout<<'\n';
}

class Graph
{
    int V;
    list<int>* l;
public:
    Graph(int v)
    {
        V=v;
        l=new list<int> [V];
    }
    void AddEdge(int u,int v, bool bidir=true)
    {
        l[u].push_back(v);
        if(bidir)
            l[v].push_back(u);
    }
    void PrintAdjL()
    {
        for(int i=0;i<V;i++)
        {
            cout<<i<<":";
            PRINT(l[i]);
        }
    }
};


int main()
{
Graph G(5);
G.AddEdge(0,1);
G.AddEdge(0,4);
G.AddEdge(1,4);
G.AddEdge(1,3);
G.AddEdge(4,3);
G.AddEdge(3,2);
G.AddEdge(1,2);
G.PrintAdjL();

}
