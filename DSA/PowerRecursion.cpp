#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;

int power(int a, int n, int c)
{

    if (c == n)
    {
        return a;
    }
    int ans = a * power(a, n, c + 1);
    return ans;
}

int fastPower(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int FinalPower = fastPower(a, n / 2) * fastPower(a, n / 2);
    return FinalPower;
}

int main()
{
    int a = 8;
    int n = 5;
    cout << power(a, n, 1);
    return 0;
}