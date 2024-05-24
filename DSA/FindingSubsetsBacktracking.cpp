#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;
// int this we will find subsets of  a string using backtracking basically we will recursively make 2 possibilities for every charater either tot ake it or not like this at the end we will have all the possibilities of subsets possible in the string
bool comp(string a, string b)
{
    if (a.length() == b.length())
    {
        return a < b;
    }
    return a.length() < b.length();
}
void findSubset(char *input, char *output, int i, int j, vector<string> &list)
{
    // base case
    if (input[i] == '\0')
    {
        output[j] = '\0';
        string temp(output);
        list.push_back(temp);
        return;
    }

    // recursive cases
    // take the character
    output[j] = input[i];
    findSubset(input, output, i + 1, j + 1,list);
    // not to take the character
    findSubset(input, output, i + 1, j, list);
}
int main()
{
    char input[100];
    char output[100];
    vector<string> list;
    cin >> input;
    findSubset(input, output, 0, 0, list);
    sort(list.begin(), list.end(), comp);
    for (int i=0;i<list.size();i++){
        cout<<list[i]<<" ";
    }
    return 0;
}