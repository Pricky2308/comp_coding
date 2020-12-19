#include<iostream>
#include<queue>
#include<list>
#include<map>
using namespace std;

typedef list<string>::iterator ListIT;

template <typename T>
class Graph
{
    map< T,list<T> > Adjlist;
public:
    Graph()
    {

    }
    void AddEdge(T u,T v,bool bdir=true)
    {
    Adjlist[u].push_back(v);
    if(bdir)    Adjlist[v].push_back(u);
    }
    void Print()
    {

        //traversing the map. Adjlist
        typename map<T, list<T> >::iterator It=Adjlist.begin();
        typename map<T, list<T> >::iterator ItE=Adjlist.end();

        while(It!=ItE)
        {
            cout<<It->first<<":";
            //traversing the list
            typename list<T>::iterator ListIt=It->second.begin();
            typename list<T>::iterator ListIt2=It->second.end();

            while(ListIt!=ListIt2)
            {
                cout<<*ListIt<<',';
                ListIt++;
            }
            cout<<endl;
            It++;
        }

    }

    void BFS(T src)
    {
        map<T,bool> visited;
        queue <T> Q;
        Q.push(src);
        visited[src]=true;

        while(!Q.empty())
        {
            T Node=Q.front();
            cout<<Node<<' ';
            Q.pop();

            //Adjlist[Node] is a list
            typename list<T>::iterator It=Adjlist[Node].begin();
            typename list<T>::iterator It2=Adjlist[Node].end();

            //adding neighbours
            while(It!=It2)
            {
                if(visited[*It]==false)
                {
                    Q.push(*It);
                    visited[*It]=true;
                }
                It++;
            }


        }
    }
};

using namespace std;

int main()
{
Graph <string> G;
G.AddEdge("Putin","Trump",false);
G.AddEdge("Putin","Modi",false);
G.AddEdge("Putin","Pope",false);
G.AddEdge("Modi","Trump",true);
G.AddEdge("Modi","Yogi",true);
G.AddEdge("Yogi","Prabhu",false);
G.AddEdge("Prabhu","Modi",false);
G.Print();
cout<<endl;
G.BFS("Putin");
}
