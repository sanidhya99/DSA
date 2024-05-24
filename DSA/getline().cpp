#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;

int main(){
//instead of using character array use string 
// there are 2 ways of input string: 
/* 1) cin>>s;
   2) getline(cin,s,'stopping character');----------> better way*/
   vector<string>temp;
   for(int i=0;i<5;i++){
    string s;
   getline(cin,s,'.');
    temp.push_back(s);
   }
   for(string sarr:temp){
    cout<<sarr<<",";
   }
return 0;
}