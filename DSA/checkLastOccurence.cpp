#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;

int LastOccurence(int num[], int n, int p, int key)
{
    if (num[p] != key & p==(n-1))
    {
        return -1;
    }
    else if (num[p] == key & p==(n-1))
    {
        return p;
    }
    else if (num[p] == key && (LastOccurence(num, n, p + 1, key) == (-1)))
    {
        return p;
    }
    else if (num[p] != key && (LastOccurence(num, n, p + 1, key) == (-1)))
    {
        return -1;
    }
    int ans = LastOccurence(num, n, p + 1, key);
    return ans;
}

int main()
{
    int num[6] = {1, 2, 7, 6, 1, 7};
    cout << "The last occurence of the 7 is " << LastOccurence(num, 6, 0, 7);
    return 0;
}