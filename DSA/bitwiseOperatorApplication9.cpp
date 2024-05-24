#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;

// Here we will write an algorithm to count the set bits in a given number
//  Logic - we will basically check each and every bit of the number by using & operator with 1 if it gives 1 then right most bit is 1 in that case count++ and number will be rigth shifted  after every iteration till it becomes 0

int main()
{
    int num;
    cin >> num;
    int count = 0;
    int ref;
    while (num > 0)
    {
        ref = num & 1;
        if (ref == 1)
        {
            count++;
        }
        num = num >> 1;
    }
    cout << count << endl;
    return 0;
}