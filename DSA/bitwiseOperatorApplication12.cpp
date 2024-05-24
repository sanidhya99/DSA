#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;

//Here we will write an algorithm to convert any number into its binary form

vector<int> toBin(int n)
{
    int mask = 1;
    vector<int> ref;
    while (n > 0)
    {
        ref.push_back(n & 1);
        n = n >> 1;
    }
    return ref;
}

int BinSol(int n)
{
    vector<int> ref = toBin(n);
    int sol = 0;
    for (int i = ref.size() - 1; i >= 0; i--)
    {
        sol = sol * 10 + ref[i];
    }
    return sol;
}
int main()
{
    int num;
    cin >> num;
    int bin = BinSol(num);
    cout << bin << endl;
    return 0;
}