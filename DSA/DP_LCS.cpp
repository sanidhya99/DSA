#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;

int ls(vector<int>arr){
    int n=arr.size();
vector<int>dp(n,1);
int len=1;
for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
        if(arr[i]>arr[j]){
            dp[i]=max(dp[i],dp[j]+1);
            len=max(len,dp[i]);
        }
    }
}
return len;
}

int ls2(vector<int>arr){
    //this have even more optimised space complexity and time complexity is same
    int n=arr.size();
// vector<int>dp(n,1);
int len=1;
int lenref=0;
int ref;
for(int i=n-1;i>0;i--){
    ref=arr[i];
    lenref=1;
    for(int j=i-1;j>=0;j--){
        if(ref>arr[j]){
           lenref++;
           ref=arr[j];
        }
    }
    len=max(len,lenref);
}
return len;
}

int main(){
vector<int>arr{50,4,10,8,30,100};
cout<<ls2(arr)<<endl;
return 0;
}