#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;
//in clear bit we have to make the bit specified 0
void clearIthBit(int &n, int i)
{
    n = (n & (~(1 << i)));
}
// here we want to make such a number in which only specified bit is 0 else every bit is same as before, for which we use a & operator with negation of a number (1<<i) by which trgger point is 0 rest is 1 now by and 0 comes corr. to target and else comes same as & with 1 gives same bit as before
/*
eg- 13 [1101]
here we want to clear 2 bit {ie. 1001} so we use 0100 then its negation is 1011
now
1101 & 1011 becomes 1001 which is 9
*/
int main()
{
    int num;
    cin >> num;
    int i;
    cin >> i;
    clearIthBit(num, i);
    cout << num << endl;
    return 0;
}