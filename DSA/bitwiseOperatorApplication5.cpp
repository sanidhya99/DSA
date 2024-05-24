#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;
// here we will write a code to clear last i bits of a number by ]using a & opreator with num  with a value which is (~0<<i);
void clearLastIbits(int &n, int i)
{
    n = (n & ((~0) << i));
}
int main()
{
    int num, i;
    cin >> num >> i;
    clearLastIbits(num, i);
    cout << num << endl;
    return 0;
}