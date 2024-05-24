#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;
string spell[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string PrintNumString(int n)
{
    if (n < 1)
    {
        return "\0";
    }
    string s;
    switch (n % 10)
    {
    case 0:
        s = "zero";
        break;
    case 1:
        s = "One";
        break;
    case 2:
        s = "Two";
        break;
    case 3:
        s = "Three";
        break;
    case 4:
        s = "Four";
        break;
    case 5:
        s = "Five";
        break;
    case 6:
        s = "Six";
        break;
    case 7:
        s = "Seven";
        break;
    case 8:
        s = "Eight";
        break;
    case 9:
        s = "Nine";
        break;
    }
    string ans = PrintNumString(n / 10) + " " + s;
    return ans;
}
void PrintNumString2(int n)
{
    if (n == 0)
    {
        return;
    }
    int lastDigit = n % 10;
    PrintNumString2(n / 10);
    cout << spell[lastDigit]<<" ";
}
int main()
{
    int n = 2021;
    string str = PrintNumString(n);

    cout << str;
    return 0;
}