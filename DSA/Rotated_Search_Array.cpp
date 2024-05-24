#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;

int rotated_index(vector<int> a, int key)
{
    int n = a.size();
    int s = 0;
    int e = n - 1;

    int mid;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[s] <= a[mid])
        {
            if (key >= a[s] && key < a[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else
        {
            if (key > a[mid] && key <= a[e])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
}

int main()
{
    vector<int> a{4, 5, 6, 7, 0, 1, 2, 3};
    int key;
    cin >> key;
    cout << "The index of the key given is " << rotated_index(a, key) << endl;
    return 0;
}