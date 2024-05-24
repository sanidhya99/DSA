#include <iostream>
#include <bits/stdc++.h>
#include <ctime>
#define ll long long int
#include <string>
using namespace std;

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
    sort(arr.begin(), arr.end());
    auto end = clock();
    cout << end - start << endl;

    return 0;
}