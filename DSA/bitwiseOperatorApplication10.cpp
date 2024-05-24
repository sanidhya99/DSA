#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;

// Here we will write an algorithm to count number of set bits in a number in less time complexity
//  Logic - basically till number is >0 we will keep incrementing count and right shift number in this way we be able to count all bits step by step

int main()
{
    int num;
    cin >> num;
    int count = 0;
    while (num > 0)
    {
        num = num & (num - 1);
        count++;
    }
    cout << count << endl;
    return 0;
}