#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;
// bubble sort - to constantly move greater element to right
/* time complexity:-
                     1)best case- n
                     2)avg case-n^2
                     3)worst case-n^2*/
void bubble_sort(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - (i + 1); j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main()
{
  int arr[] = {1, 5, 78, 34, -45, 7, 32, 65, 43, 87, 1, -67};
  int n = sizeof(arr) / sizeof(int);
  bubble_sort(arr, n);

  return 0;
}
