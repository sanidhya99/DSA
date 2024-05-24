#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;

// here we will check if the number is a power of 2 or not by using & operator
//  logic - basically all the numbers who are power of 2 are the negation of the number 1 less than them so their & will give 0 .

int main()
{
    int n;
    cin >> n;
    ((n & (n - 1)) == 0) ? (cout << "yes power of 2") : (cout << "no not even");
    return 0;
}