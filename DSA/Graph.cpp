//-------------------------------------THEORY------------------------------------------------

/*
Whenever we have to mantain data in form of a network of data we make graph

In graph nodes are called the vertices and the connection between each node is called edge

In graph we can mantain data in 4 forms:
1) Adjacency list - array of linked lists (each linked list containing adjacent vertices of the corresponding vertice)
2) Adjacency Matrix - A 2D matrix with all vertices placed on both dimensions of matrix , where each member store a bool whether the 2 vertices on its 2 dimensions are connected or not
3) Edge List
4) Implicit Graph
*/

//-------------------------------------CODE--------------------------------------------------
#include <iostream>
#include <bits/stdc++.h>
#include <list>
#define ll long long int
#include <string>
using namespace std;

class Graph
{
    int V;
    list<int> *l;

public:
    Graph(int v)
    {
        V = v;
        l = new list<int>[v];
    }
    void addEdge(int i, int j, bool Undirected = false)
    {
        l[i].push_back(j);
        if (Undirected)
        {
            l[j].push_back(i);
        }
    }
    void printGraph()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << "-->";
            for (auto x : l[i])
            {
                cout << x << "->";
            }
            cout << endl;
        }
    }
    void bfs(int source){
        queue<int>q;
        bool visited[V]{0};
        q.push(source);
        visited[source]=true;
        while(!q.empty()){
            int f=q.front();
            cout<<f<<endl;
            q.pop();
            for(auto nf:l[f]){
                if(!visited[nf]){
                    q.push(nf);
                    visited[nf]=true;
                }
            }
        }
    }
    void dfsHelper(int node,bool visited[]){
        visited[node]=true;
        cout<<node<<" ";
        
        for(auto nbr:l[node]){
           if(!visited[nbr]){
            dfsHelper(nbr,visited);
           }
        }
        return;
    }
    void dfs(int source){
        bool visited[V]{0};
        dfsHelper(source,visited);
    }
    void topologicalSort(){
        vector<int> indegree(V, 0);

        // Calculate indegree of each vertex
        for (int u = 0; u < V; u++) {
            for (int v : l[u]) {
                indegree[v]++;
            }
        }

        queue<int> q;

        // Enqueue vertices with indegree 0
        for (int u = 0; u < V; u++) {
            if (indegree[u] == 0) {
                q.push(u);
            }
        }

        // Perform topological sorting
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            cout << u << " ";

            for (int v : l[u]) {
                indegree[v]--;
                if (indegree[v] == 0) {
                    q.push(v);
                }
            }
        }
    }
};

int main()
{
    Graph g(6);
    g.addEdge(0, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 5);
    g.addEdge(1, 4);
    g.addEdge(1, 2);
    g.addEdge(4, 5);
    // g.dfs(1);
    g.topologicalSort();


    return 0;
}