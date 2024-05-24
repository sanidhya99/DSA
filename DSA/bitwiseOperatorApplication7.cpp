#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;

// basically in this we will take 2 numbers n and m and will set bits of m in n in a particular range for that we will first clear bits of n in that range amd then apply n|(m<<s) where s is starting point of the range in which bits of m is to be inserted.

int clearRangeOfBits(int n, int s, int e)
{
    int mask = ((~0) << (e + 1)) | (~((~0) << s));
    n = n & mask;
    return n;
}
int replaceBits(int n, int m, int i)
{
    int mask = (m << i);
    return (n | mask);
}
int main()
{
    int n = 15;
    int m = 2;
    int i = 1;
    int j = 3;
    int ref = clearRangeOfBits(n, i, j);
    int sol = replaceBits(ref, m, i);
    cout << sol << endl;

    return 0;
}