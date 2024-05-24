#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;
int tot_mar(vector<int> m)
{
    
    // this is a function to calculate total marks in a vector
    int count = 0;
    for (int i = 0; i < m.size(); i++)
    {
        count += m[i];
    }
    return count;
}
bool cmp(pair<string, vector<int>> m1, pair<string, vector<int>> m2)
{
    // this is the bool function to compair pairs acc. to the total marks of vector in pair
    return tot_mar(m1.second) > tot_mar(m2.second);
}
int main()
{
    vector<pair<string, vector<int>>> stm = {
        {"Rohan", {10, 20, 11}}, {"Prateek", {10, 21, 3}} ,{"Vivek", {4, 5, 6}} ,{"Rijul", {10, 13, 20}}};
    // we have to sort this vector according to marks of the students
    sort(stm.begin(), stm.end(), cmp);
    for (int i = 0; i < stm.size(); i++)
    {
        cout << "Marks of " << stm[i].first << " is " << tot_mar(stm[i].second) << endl;
    }

    return 0;
}