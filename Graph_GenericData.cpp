#include<iostream>
#include<map>
#include<list>
#include<queue>
#include<limits.h>
using namespace std;

#define LIt typename list<T>::iterator
#define MIt typename map< T,list<T> >::iterator

template<typename T>
class Graph
{
    map< T,list<T> > AdjList;
public:
    Graph()
    {

    }
    void AddEdge(T u,T v, bool bidir=true)
    {
        AdjList[u].push_back(v);
        if(bidir)
        {
            AdjList[u].push_back(v);
        }
    }

    void PrintG()
    {
        //print the AdjList which is a map
        typename map< T,list<T> >::iterator It;
        It=AdjList.begin();
        while(It!=AdjList.end())
        {
            cout<<It->first<<":\t";
            //It->second is a linked list
            typename list<T>::iterator Lit=It->second.begin();
            while(Lit!=It->second.end())
            {
                cout<<*Lit<<' ';
                Lit++;
            }
            cout<<endl;

            It++;
        }

    }

    void ShortestPath_BFS(T src)
    {
        queue<T> q;
        map<T,int> Dist;
        map<T,T> Parent;

        //making all distances equal to INT_MAX
        typename map<T,list<T> >::iterator It=AdjList.begin();
        typename map<T,list<T> >::iterator End=AdjList.end();
        while(It!=End)
        {
            Dist[It->first]=INT_MAX;
            It++;
        }

        q.push(src);
        Dist[src]=0;
        Parent[src]=src;

        while(!q.empty())
        {
            T node=q.front();
            cout<<node<<' ';
            q.pop();

            //traversing the list, AdjList[node]
            typename list<T>::iterator It=AdjList[node].begin();
            typename list<T>::iterator End=AdjList[node].end();
            // for the neighbour of the current node, find out the nodes which
            //are not visited
            while(It!=End)
            {
                //*It is a neighbour
                T neighnour = *It;
                if(Dist[neighnour]==INT_MAX)
                {
                    q.push(neighnour);
                    Dist[neighnour]=Dist[node]+1;
                    Parent[neighnour]=node;
                }
                It++;
            }
        }

        //printing all the distances
        It=AdjList.begin();
        MIt It2=AdjList.end();
        while(It!=It2)
        {
            cout<<"Distance of "<<It->first<<" from"<<src<<" is "<<Dist[It->first]<<endl;
            It++;
        }
    }



    void BFS(T src)
    {
    queue<T> q;
    map<T,bool> visited;

    q.push(src);
    while(!q.empty())
    {
        T node=q.front();
        cout<<node<<' ';
        q.pop();

        typename list<T>::iterator It=AdjList[node].begin();
        typename list<T>::iterator End=AdjList[node].end();
        // for the neighbour of the current node, find out the nodes which
        //are not visited
        while(It!=End)
        {
            //*It is a neighbour
            T neighnour = *It;
            if(!visited[neighnour])   q.push(neighnour);
            visited[neighnour]=true;
            It++;
        }
    }
    }



};

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
G.PrintG();
cout<<endl;
G.ShortestPath_BFS("Putin");
}
