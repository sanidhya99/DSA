#include<bits/stdc++.h>
using namespace std;

class Node{
char data;
unordered_map<char,Node*>m;
bool isterminal;
public:
Node(char data){
    data=data;
    isterminal=false;
}
friend class trie;
};

class trie{
Node * root;
public:
trie(){
root=new Node('\0');
}
//insertion
void insert(string word){
    Node * temp=root;
    for(char ch:word){
        if(temp->m.count(ch)==0){
            Node * n =new Node(ch);
            temp->m[ch]=n;
        }
        temp=temp->m[ch];
    }
    temp->isterminal=true;
}
//searching
bool search(string word){
    Node * temp=root;
    for(char ch:word){
        if(temp->m.count(ch)==0){
            return false;
        }
        temp=temp->m[ch];
    }
    return temp->isterminal;
}
};