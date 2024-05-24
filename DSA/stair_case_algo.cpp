//to find indices of a particular value in 2D array
#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;
pair<int,int>staircasesearch(int arr[][4],int n,int m,int key){
 if(key<arr[0][0] || key>arr[n-1][m-1]){
    return {-1,-1};
 }   
else{
    int i=0,j=m-1;
    while(i<n && j>=0){
    if(arr[i][j]==key){
   return {i,j};
    }
    else if( arr[i][j]<key){
        i++;
    }
    else{
        j--;
    }
    
    }
}
return {-1,-1};
}
int main(){
int arr[][4]={
    {10,20,30,40},
    {15,25,35,45},
    {27,29,37,48},
    {32,33,39,50}
};
int key=35;
pair<int,int>cod=staircasesearch(arr,4,4,key);
cout<<"The x cordinates of the "<<key<<" is "<<cod.first<<" and y cordinates of the "<<key<<" is "<<cod.second<<endl;
return 0;
}