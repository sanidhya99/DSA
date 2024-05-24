#include<iostream>
#include"queue.h"
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;

int main(){
MyQueue s(7);
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.push(6);
s.push(7);

s.pop();
s.pop();
s.push(9);
s.push(10);
while(!s.isempty()){
    cout<<s.getfront()<<" ";
   s.pop();
}
return 0;
}