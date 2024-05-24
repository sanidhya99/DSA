#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int res = 0;
    int power = 1;
    int ref;
    while (n != 0)
    {
        ref = 1 & (n);
        res += (power * ref);
        power *= 10;
        n = (n >> 1);
    }

    return 0;
}