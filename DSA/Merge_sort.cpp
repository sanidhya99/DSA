// Here we will look about merge sort one of the sorting algorithms which work on recursion and backtracking to sort a given data type
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;
void Merge(vector<int> &arr, int s, int e)
{
    vector<int> temp;
    int i = s;
    int m = (s + e) / 2;
    int j = m + 1;
    // to set sorted array untill one of the array is exhausted by comparing
    while (i <= m && j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    // to set remaining already sorted elements
    while (i <= m)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= e)
    {
        temp.push_back(arr[j]);
        j++;
    }
    int k = 0;
    for (int ind = s; ind <= e; ind++)
    {
        arr[ind] = temp[k];
        k++;
    }
}
void Merge_sort(vector<int> &arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    // updation
    int mid = (s + e) / 2;
    // recursive case
    Merge_sort(arr, s, mid);
    Merge_sort(arr, mid + 1, e);
    return Merge(arr, s, e);
}
int main()
{
    vector<int> arr = {10, 5, 2, 0, 7, 6, 4};
    int i = 0;
    int e = arr.size() - 1;
    Merge_sort(arr, i, e);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}