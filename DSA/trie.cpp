//Trie Data Structure - It is basically more usefull for string insertion searching . It reduce time complexity to shortest i.e o( length of string ) in both insertion and searching case . It is mantained in form of a generic tree [generic tree - a normal tree in which any node can have as many child nodes as neede there is no limit and the addresses or pointers of all child nodes are managed in a hash map attached to that node . And the ending node or leaf node is determined by mantaining an attribute TN( terminal node ) , this attribute is given to all leaf node to determine at time of searching . 
#include<iostream>
#include<bits/stdc++.h>
#include"trie.h"
#define ll long long int
#include<string>
using namespace std;

int main(){
vector<string>s={"india","russia","nahan","hamirpur","dharamshala"};
trie t;
for(auto ct:s){
    t.insert(ct);
}

string sr;
cin>>sr;

if(t.search(sr)){
    cout<<"Yes "<<sr<<" is present in list";
}
else{
    cout<<"No "<<sr<<" is not present in list";
}
return 0;
}