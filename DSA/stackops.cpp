#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include "stackLL.h"

#include<string>
using namespace std;

int main(){
Stack<char>s;
s.push('h');
s.push('e');
s.push('l');
s.push('l');
s.push('o');
s.push_bt('s');
while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
}

return 0;
}