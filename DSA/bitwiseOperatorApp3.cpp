#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;
//in set bit we have to make the bit specified 1
void setIthBit(int &n, int i)
{
    n = (n | (1 << i));
}
// here we set i th bit of any number by using a or operator with a number (1<<i) by which if it is 0 then it becomes 1 and rest every bit turns same as or with 0 gives same bit again
//  example 5 [101]
//  101|010-->it becomes 111 which is 7
int main()
{
    int num;
    cin >> num;
    int i;
    cin >> i;
    setIthBit(num, i);
    cout << num << endl;
    return 0;
}