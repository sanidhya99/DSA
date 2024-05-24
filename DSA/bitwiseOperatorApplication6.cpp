#include<iostream>
#include<bits/stdc++.h>

#define ll long long int
#include<string>
using namespace std;
// here we are going to clear a range of bits

int clearRangeOfBits(int n,int s,int e){
    int mask=((~0)<<(e+1))|(~((~0)<<s));
    n=n&mask;
    return n;
}
int main(){
int ref=29;
int s=1;
int e=3;
ref=clearRangeOfBits(ref,s,e);
cout<<ref<<endl;
return 0;
}