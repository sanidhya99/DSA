#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;

int knapsack(int wts[], int prices[], int n, int w)
{
    // base case
    if (n == 0 || w == 0)
    {
        return 0;
    }

    // recursive case
    int exec = 0, inc = 0;
    if (w >= wts[n - 1])
    {
        inc = prices[n - 1] + knapsack(wts, prices, n - 1, w - wts[n - 1]);
    }
    exec = knapsack(wts, prices, n - 1, w);
    return max(exec, inc);
}

int knapsackdp(int wts[], int prices[], int N, int W)
{
    vector<vector<int>> dp(N + 1, vector<int>(W + 1, 0));

    for (int n = 1; n <= N; n++)
    {
        for (int w = 1; w <=W; w++)
        {
            int inc=0,exec=0;
            if(wts[n-1]<=w){
                inc=prices[n-1]+dp[n-1][w-wts[n-1]];
            }
            exec=dp[n-1][w];
            dp[n][w]=max(exec,inc);
        }
        
    }
    return dp[N][W];
}

int main()
{
    int wts[] = {2, 7, 3, 4};
    int prices[] = {5, 20, 20, 10};
    int n = 4;
    int w = 11;
    cout << knapsack(wts, prices, n, w) << endl;
    cout << knapsackdp(wts, prices, n, w) << endl;

    return 0;
}