#include<bits/stdc++.h>
#include<iostream>
#include<list>
#define ll long long int
#include<string>
using namespace std;

class vertice{
    string key;
    list<string> l;
public:
    vertice(string s){
        this->key = s;
    }
    friend class Graph;
};

class Graph{
    map<string, vertice*> m;
public:
    Graph(vector<string> cities){
        for(auto s: cities){
            m[s] = new vertice(s);
        }
    }
    void addEdge(string s1, string s2, bool undirected=true){
        m[s1]->l.push_back(s2);
        if(undirected){
            m[s2]->l.push_back(s1);
        }
    }
    void printGraph(){
        for(auto city: m){
            auto citi = city.first;
            vertice* addr = city.second;
            cout << citi << "-->";
            for(auto nb: addr->l){
                cout << nb << "->";
            }
            cout << endl;
        }
    }
};

int main(){
    vector<string> cities = {"nahan", "dharamshala", "hamirpur", "mohali", "chandigarh", "panchkula"};
    Graph g(cities);
    g.addEdge("nahan", "dharamshala");
    g.addEdge("nahan", "hamirpur");
    g.addEdge("nahan", "mohali");
    g.addEdge("chandigarh", "mohali");
    g.addEdge("panchkula", "mohali");
    g.addEdge("panchkula", "chandigarh");
    g.printGraph();
    return 0;
}
