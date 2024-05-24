#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;

int MinCoins(int m, vector<int> coins)
{
    //to store the number of coins for each amount till m
    vector<int> dp(m + 1, 0);
    //initializing 0 amount coins with 0
    dp[0] = 0;
    for (int i = 1; i <= m; i++)
    {
        //initializing target index to be calculated with int max so that min function can be applied effectively 
        dp[i] = INT_MAX;
        //iterating over all coins and checking min coins needed for remaining amount if 1 coin is taken 
        for (int c : coins)
        {
            if (i - c >= 0 && dp[i - c] != INT_MAX)
            {
                dp[i] = min(dp[i], dp[i - c] + 1);
            }
        }
    }
    //finally calculated min coins for desired amount
    return dp[m] == INT_MAX ? (-1) : dp[m];
}

int main()
{
    vector<int> coins = {1, 5, 7, 10};
    int m;
    cin>>m;
    cout << MinCoins(m, coins) << endl;
    return 0;
}