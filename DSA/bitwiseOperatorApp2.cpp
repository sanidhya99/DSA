#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;
// here we wil se 3 simple operations of bitwise operators --
/*
1) get i th bit
2) set i th bit
3) clear i th bit
*/
int getIthBit(int n, int i)
{
    return (n & (1 << i)) >> i;
}
int main()
{
    int num;
    cin >> num;
    int i;
    cin >> i;
    cout << getIthBit(num, i) << endl;
    return 0;
}