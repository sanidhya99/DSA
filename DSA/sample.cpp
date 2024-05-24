#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;

int m1=0,m2=0;
int fib(int n){
    if(n==1 || n==0){
        return n;
    }
    m1++;
    return fib(n-1)+fib(n-2);
}
int fib2(int n,int dp[]){
    m2++;
    if(n==0||n==1){
        return n;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    return dp[n]=fib2(n-1,dp)+fib2(n-2,dp);
}

int main(){
int dp[8]={0};
int r1=fib(7);
int r2=fib2(7,dp);
cout<<"result of 1st method is "<<r1<<" number of iterations is "<<m1<<endl;
cout<<"result of 2nd method is "<<r2<<" number of iterations is "<<m2<<endl;
return 0;
}