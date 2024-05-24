#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;
//top down approach
int wines(int dp[][10],int prices[],int l,int r,int y){
    //base case
    if(l>r){
        return 0;
    }
    //pre defined check
    else if(dp[l][r]!=0){
        return dp[l][r];
    }
    //recursive case
    else{
    int left=y*prices[l]+wines(dp,prices,l+1,r,y+1);
    int right=y*prices[r]+wines(dp,prices,l,r-1,y+1);
    return dp[l][r]=max(left,right);
    }
}

//alternate top down approach
int wines2(int prices[],int l,int r,int y){
    //base case
    if(l==r){
        return y*prices[l];
    }
    //recursive case
    else{
    int left=y*prices[l]+wines2(prices,l+1,r,y+1);
    int right=y*prices[r]+wines2(prices,l,r-1,y+1);
    return max(left,right);
    }
}

int main(){
int a[]={2,3,5,1,4};
int n=5;
int dp[10][10]={0};
cout<<wines(dp,a,0,n-1,1)<<endl;
cout<<wines2(a,0,n-1,1)<<endl;
return 0;
}