#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;
// insertion sort- to divide array into one initial element and rest all elements and then keep picking elements one by one from right side and keep placing 
//them in right positions wrt to initial element 
/* time complexity:-
                     1)best case- n
                     2)avg case-n^2
                     3)worst case-n^2*/
void insertion_sort(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    int current = arr[i];
    int prev = i - 1;
    while (prev >= 0 && arr[prev] > current)
    {
      arr[prev + 1] = arr[prev];
      prev -= 1;
    }
    arr[prev + 1] = current;
  }
}
int main()
{
  int arr[] = {1, 5, 78, 34, -45, 7, 32, 65, 43, 87, 1, -67};
  int n = sizeof(arr) / sizeof(int);
  insertion_sort(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  cout << endl;
  return 0;
}
