#include <iostream>
#include "vector.h"
//this is a self created header file the code of a self created header file can be stored inside a .h file and then can be included as header file in other files with format as shown
// #include <bits/stdc++.h>
// #define ll long long int
// #include <string>
using namespace std;


int main()
{
    vector<int>v(5);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout << "size of vector is " << v.size() << endl;
    cout << "capacity of vector is " << v.capacity() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    v.push_back(6);
    cout << "size of vector is " << v.size() << endl;
    cout << "capacity of vector is " << v.capacity() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    v.pop_back();
    cout << "size of vector is " << v.size() << endl;
    cout << "capacity of vector is " << v.capacity() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl
         << " the front element is " << v.front() << endl
         << " the back element is " << v.back() << endl
         << " the element at index 2 is  is " << v.at(2) << endl
         << " the element at 3 is " << v[3];
    return 0;
}