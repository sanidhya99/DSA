#include <bits/stdc++.h>

using namespace std;

class Heap
{
private:
    vector<int> v;

    void heapify(int i)
    {
        int minidx = i;
        int left = 2 * i;
        int right = (2 * i) + 1;
        if (left < v.size() && v[left] < v[i])
        {
            minidx = left;
        }
        if (right < v.size() && v[right] < v[minidx])
        {
            minidx = right;
        }
        if (minidx != i)
        {
            swap(v[i], v[minidx]);
            heapify(minidx);
        }
    }
public:
    Heap(int default_size = 10)
    {
        v.reserve(default_size + 1);
        v.push_back(-1);
    };

    void push(int x)
    {
        v.push_back(x);
        int ind = v.size() - 1;
        int parent = ind / 2;

        while (ind > 1 && v[ind] < v[parent]) // for min heap
        // while (ind > 1 && v[ind] > v[parent])-->for max heap
        {
            swap(v[ind], v[parent]);
            ind = parent;
            parent = parent / 2;
        }
    }
    int top()
    {
        return v[1];
    }
    void pop()
    {
        int idx = v.size() - 1;
        swap(v[1], v[idx]);
        v.pop_back();
        heapify(1);
    }
    bool empty(){
        return v.size()==1;
    }
};