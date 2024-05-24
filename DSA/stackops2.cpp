#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;

void insert(stack<int>&s,int d){
    if(s.empty()){
        s.push(d);
        return;
    }
    int temp=s.top();
    s.pop();
    insert(s,d);
    s.push(temp);
}

int main(){
stack<int>s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
insert(s,5);
while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
}

return 0;
}