#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;
void print(int arr[][100],int n,int m){
      //Print
      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < m; j++)
        {
          cout<<arr[i][j];
        }
        cout<<endl;
      }
}
int main(){
int num[100][100];
int n,m;
cin>>n>>m;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j <m; j++)
    {
        cin>>num[i][j];
    }
    
}
//Call Print
print(num,n,m);
return 0;
}
/* 2d arrays are stored in 1d in memory in linear memory allocation 
for that computer uses 2 forms
 row major form and column major form 
 mostly computers use row major form and it is most important as well 
in row major form data is stored in computer memory in linear form row wise
 and in column it is stored column wise
eg-------->
1 2 3 4
5 6 7 8
9 10 11 12
this is a 2D array 
~now row major form of this array would be->
1 2 3 4 5 6 7 8 9 10 11 12
~now column major form of this array would be->
1 5 9 2 6 10 3 7 11 4 8 12*/

