#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // for sum of all sub arrays
    int sums[10];
    sums[0] = arr[0];
    for (int i = 1; i < 10; i++)
    {
        sums[i] = arr[i] + sums[i - 1];
    }

    for (int i = 0; i < 10; i++)
    {
     for (int j = i; j <10; j++)
     {
        (i>0)?(cout<<sums[j]-sums[i-1]<<" "):(cout<<sums[j]<<" ");
     }
     
    }
    

    return 0;
}