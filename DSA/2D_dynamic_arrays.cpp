#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;
int **dynamic2Darray(int rows, int col)
{
    int **arr = new int *[rows];//here we created a pointer of an array containing the pointers of all individual rows of 2d array
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[col];// here we created all individual arrays associated with all pointers stored in arr
    }
    int val = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = val;//here we assign values by accesing 2d array same as we do in static 2d array
            val++;
        }
    }
    return arr;
}
int main()
{
    int row, col;
    cin >> row >> col;
    int **arr = dynamic2Darray(row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    delete []arr;
   
cout<<arr;

    return 0;
}