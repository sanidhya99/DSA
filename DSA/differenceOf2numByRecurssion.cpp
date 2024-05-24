#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;
int difference(int t)
{
    int x = 0;
    if (t == 7)
    {
        return 0;
    }
   x=1+difference(t+1);
   return x;
}
int main()
{
    ll t;
    cin >> t;
    cout << difference(2) << endl;
    return 0;
}