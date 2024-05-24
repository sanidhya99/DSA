#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;

int FirstOccurencce(int num[], int p, int n, int key)
{
    if (p <=(n - 1) & num[p] == key)
    {
        return p;
    }
    else if( (p==(n-1)) &  (num[p]!=key))return -1;
    int ans = FirstOccurencce(num, p + 1, n, key);
    return ans;
}

int main()
{
    int num[8] = {1, 2, 3, 5, 3,5,8,5};
    cout << "First Occurene of 5 is " << FirstOccurencce(num, 0, 8, 17);
    return 0;
}