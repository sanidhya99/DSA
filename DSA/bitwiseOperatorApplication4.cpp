#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;
void clearIthBit(int &n, int i)
{
    n = (n & (~(1 << i)));
}
// here we want to update i th bit of a number by a user given value(either 0 or 1), so what we do is first we clear that bit and then we set that bit acc by using | operator with either (1<<i) or 0 acc if user specified bit is 1 or 0.
void upadteIthBit(int &n, int i, int v)
{
    clearIthBit(n, i);
    (v == 1) ? (n = (n | (1 << i))) : (n = (n | 0));
}
int main()
{
    int num, i, v;
    cin >> num >> i >> v;
    upadteIthBit(num, i, v);
    cout << num << endl;
    return 0;
}