#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;
// there are 2 types of memory ----->
/*
1) stack memory- static memory
2) heap memory - dynamic memory
*/
int main()
{
    int n;
    cin >> n;
    int *num = new int[n];// this is way to declare dynamic array and allocate a dynamic memory in heap memory
    for (int i = 0; i < n; i++)
    {
        num[i] = i + 1;
        cout << num[i] << " ";
    }
    delete[] num;// this deletes the dynamic array and frees memory from heap memory
    cout<<num<<endl;//this gives the address of dynamic array address is static and is stored in stack memory so it can be used any time till the program or function ends
    
    return 0;
}