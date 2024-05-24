#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;

class st{
vector<int>cont;
public:
void push(int d){
    cont.push_back(d);
}
int top(){
    if(cont.size()!=0){

    return cont[cont.size()-1];
    }
    return -1;
}
void pop(){
    vector<int>::iterator it=cont.end();
    it--;
 cont.erase(it);
}
};

int main(){
      st s;

      s.push(1);
      s.push(2);
      s.push(3);
      s.push(4);

      for(int i=0;i<4;i++){
    cout<<s.top()<<" ";
    s.pop();
      }
 cout<<s.top();
return 0;
}