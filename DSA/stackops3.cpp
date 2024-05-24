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
void rev(stack<int>&s){
   if(s.empty()){
    return ;
   }
   int t=s.top();
   s.pop();
   rev(s);
   insert(s,t);
}

void pr(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main(){
stack<int>s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
rev(s);
// rev(s);
pr(s);

return 0;
}