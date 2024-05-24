#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;
// bool compare(int a,int b){
//     return a>b;
// }------> either can use this and pass it inside sort to get sorted in descending order 
//or can use greater<int>() function as shown below at line 12
int main(){
int arr[] = {1, 5, 78, 34, -45, 7, 32, 65, 43, 87, 1, -67};
  int n = sizeof(arr) / sizeof(int);
  sort(arr,arr+n,greater<int>());
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  cout << endl;
return 0;
}