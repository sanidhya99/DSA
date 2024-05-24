#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;
int bins(vector<int> &arr, int s, int e, int key)
{
    int mid = (s + e) / 2;
    if (s > e)
    {
        return -1;
    }
    else if (arr[mid] == key)
    {
        return mid;
    }
    else if (key > arr[mid])
    {
        return bins(arr, mid + 1, e, key);
    }
    else
    {
        return bins(arr, s, mid - 1, key);
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 9, 10};
    int i = 0;
    int e = arr.size() - 1;
    int key = 7;
    int ind = bins(arr, i, e, key);
    cout << "Index of " << key << " is " << ind << endl;
    return 0;
}