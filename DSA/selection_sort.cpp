#include<iostream>
#include<bits/stdc++.h>
//#define ll long long int
#include<string>
using namespace std;
//selection sort- stsrting from first element go on iterating over till second last element and with each iteration 
//swapping first element of that iteration with smallest element of that iteration
/* time complexity:-
                     1)best case- n^2
                     2)avg case-n^2
                     3)worst case-n^2*/
void selection_sort(int arr[],int n){
for (int i = 0; i < n-1; i++)
{
    int current_element=arr[i];
    int min_so_far=i;
    for (int j = i; j < n; j++)
    {
        if(arr[j]<arr[min_so_far]){
            min_so_far=j;
        }
    }
    swap(arr[i],arr[min_so_far]);
}

}
int main(){
int arr[] = {1, 5, 78, 34, -45, 7, 32, 65, 43, 87, 1, -67};
  int n = sizeof(arr) / sizeof(int);
  selection_sort(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  cout << endl;
return 0;
}