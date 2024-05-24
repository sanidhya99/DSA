  //this algorithm is used to print largest sum of an subarray in a array
/* time complexity:-
                     1)best case- n
                     2)avg case-n
                     3)worst case-n*/
#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;
int max_sum(int arr[],int n){
        int cs=0;
        int ls;
        for (int i = 0; i <n; i++)
        {
            cs+=arr[i];
            if(cs<0){
                cs=0;
            }
            ls=max(cs,ls);
        }
        return ls;
}
int main(){
int arr[]={1,5,78,34,-45,7,32,65,43,87,1,-67};
int n=sizeof(arr)/sizeof(int);
int maxs=max_sum(arr,n);
cout<<"The maximum of a subarray of this array is "<<maxs<<endl;
return 0;
}