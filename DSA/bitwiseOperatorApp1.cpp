#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;
// here we will see an application of bitwise operators
int main()
{
    /*
    here we will check wheather a number is even or odd with the help of bitwise & operator
    */
    int num;
    cin >> num;
    (num & 1) ? (cout << "No !it is odd" << endl) : (cout << "Yes ! it is even" << endl);

    // ( num & 1 will give 1 if num is odd and if it gives 1 then if statement in this will be executed as in if 1 is true so we put odd output in if statement

    // and

    // if num & 1 gives 0 then num is even but then if statement will not be executed as in if statement 0 is considered false so else statement will be executed so we put even output in else statement )

    return 0;
}