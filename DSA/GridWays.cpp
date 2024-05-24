#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;
int ways(int i, int j, int m, int n)
{
    if (i == m && j == n)
    {
        return 1;
    }ka
    if (i > m || j > n)
    {
        return 0;
    }
    int ans = ways(i + 1, j, m, n) + ways(i, j + 1, m, n);
    return ans;
}
int main()
{
    int m, n;
    cin >> m >> n;
    cout << "The number of ways are " << ways(1, 1, m, n);
    return 0;
}