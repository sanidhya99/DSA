#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void fillArray(int arr[], int n, int val, int i)
{
    if (i == n)
    {
        // base case
        printArray(arr, n);
        return;
    }
    // recursion
    arr[i] = val;
    fillArray(arr, n, val + 1, i + 1);
    // backtracking
    arr[i] = ((-1) * (arr[i]));
}
int main()
{
    int arr[100];
    int n;
    cin >> n;
    fillArray(arr, n, 1, 0);
    printArray(arr, n);
    return 0;
}