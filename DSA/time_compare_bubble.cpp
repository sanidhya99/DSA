#include <iostream>
#include <bits/stdc++.h>
#include <ctime>
#define ll long long int
#include <string>
using namespace std;
void bubble_sort(vector<int> &arr, int n)
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
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        arr[i] = n - i;
    }

    auto start = clock();
    bubble_sort(arr, n);
    auto end = clock();
    cout << end - start << endl;

    return 0;
}