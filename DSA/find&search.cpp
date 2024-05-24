#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;
bool myFn(int i,int j){
    return i==2*j;
    }
int main(){
vector<int>sol={1,2,3,4,5,6};
int key=5;
vector<int>::iterator it=find(sol.begin(),sol.end(),key);
if(it!=sol.end()){
cout<<"KEY is found on the location "<<it-sol.begin()<<endl;
}
else{
    cout<<"Negative"<<endl;
}
vector<int>flag={1,2,3,4,8,12,345,456,56,67};
int ref[]={2,4,6};
vector<int>::iterator i;
i=search(flag.begin(),flag.end(),ref,ref+3,myFn);
if(i!=flag.end()){
    cout<<"KEY is found on the location "<<i-flag.begin()<<endl;
}
else{
    cout<<"Negative"<<endl;
}
return 0;
}