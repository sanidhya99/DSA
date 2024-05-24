#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;

// Here  basically we will calculate any exponential of any number in log(n) time complexity which is much faster than traditional pow function which gives n time complexity

int main()
{
    int num, p;
    cin >> num >> p;
    int ans = 1;
    int last_bit;
    while (p > 0)
    {
        last_bit = (p & 1);
        if (last_bit)
        {
            ans = ans * num;
        }
        num = num * num;
        p = p >> 1;
    }
    cout << ans << endl;
    return 0;
}