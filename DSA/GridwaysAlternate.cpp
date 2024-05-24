#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;
int fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int ways(int m, int n)
{
    return (fact(m + n-2) / (fact(m-1) * fact(n-1)));
}
int main()
{
    int m, n;
    cin >> m >> n;
    cout << "The ways are " << ways(m, n);
    return 0;
}