#include <iostream>
#include <bits/stdc++.h>
#include <queue>//To implement heap using STL we use queue
#define ll long long int
#include <string>
using namespace std;

int main()
{ 
    int arr[8] = {100, 20, 90, 30, 80, 40, 70, 50};
    priority_queue<int> heap;//-----for max heap(stl heap is by default a max heap)
    // priority_queue<int,vector<int>,greater<int>> heap;----->for min heap we add inbuilt comparetors
    for (int x : arr)
    {
        heap.push(x);
    }
    while (!heap.empty())
    {
        cout << heap.top() << ",";
        heap.pop();
    }
    return 0;
}