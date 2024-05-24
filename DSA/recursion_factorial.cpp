#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;

//the time complexity and space complexity of this is o(n)    we alsio have to remember that all recursion problems take extra space and increase space utilization------------important

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}