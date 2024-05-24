#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;

void bubble_sort_recursion(int num[], int n)
{
    if (n == 1)
    {
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (num[i] > num[i + 1])
        {
            swap(num[i], num[i + 1]);
        }
    }
    bubble_sort_recursion(num, n - 1);
}
void bubble_sort_recursion2(int num[], int n, int j)
{
    if (n == 1 || n == 0)
    {
        return;
    }
    else if (j == (n - 1))
    {
        // reduce problem size reduce j to 0 again
        bubble_sort_recursion2(num, n - 1, 0);
        return;
    }
    else if (num[j] > num[j + 1])
    {
        swap(num[j], num[j + 1]);
    }
    bubble_sort_recursion2(num, n, j + 1);
}

int main()
{
    int arr[] = {1, 5, 78, 34, -45, 7, 32, 65, 43, 87, 1, -67};
    int n = sizeof(arr) / sizeof(int);
    bubble_sort_recursion2(arr, n,0);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}