#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;
int print(int arr[][4],int n,int m){
    int sr=0;
    int er=n-1;
    int sc=0;
    int ec=m-1;
    while(sr<=er && sc<=ec){
        for (int i = sc; i <= ec; i++)
        {
            cout<<arr[sr][i]<<" ";
        }
        for (int i = sr+1; i <= er; i++)
        {
            cout<<arr[i][ec]<<" ";
        }
        for (int i = ec-1; i >= sc; i--)
        {
            if(sr==er){
                break;
            }
            cout<<arr[er][i]<<" ";
        }
        for (int i = er-1; i >= sr+1; i--)
        {
            if(sc==ec){
                break;
            }
            cout<<arr[i][sc]<<" ";
        }
        sc++;
        sr++;
        ec--;
        er--;
    }
}
int main(){
int arr[][4]={
    {1,2,3,4},
    {12,13,14,5},
    {11,16,15,6},
    {10,9,8,7}
};
int n=4,m=4;
print(arr,n,m);
return 0;
}