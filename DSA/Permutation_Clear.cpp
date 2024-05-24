#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {

        int a, b;
        cin >> a >> b;
        int ref = 3 * a - b;
        if (a >= 0 && b >= 0 && ref > b || a < 0 && b < 0 && ref < b)
            cout << "0 " << b << " " << ref << endl;
        else
            cout << ref - b << " " << b << " " << b << endl;
    }

    return 0;
}