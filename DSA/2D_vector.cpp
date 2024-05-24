#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    vector<vector<int>> num;
    vector<int> ref;
    int val = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ref.push_back(val);
            val++;
        }
        num.push_back(ref);
        ref.clear();
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << num[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
