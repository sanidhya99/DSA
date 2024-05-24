#include <bits/stdc++.h>
#define ll long long int
using namespace std;
/* time complexity:-
                     1)best case- 1
                     2)avg case-log n
                     3)worst case-log n*/
ll binary_search(ll num[], ll n, ll key)
{
    ll s = 0, e = (n - 1);
    while (s <= e)
    {
        ll mid = ((s + e) / 2);
        if (num[mid] == key)
        {
            return mid;
        }
        else if (num[mid] > key)
        {
            e = mid - 1;
        }
        
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
ll main()
{
    ll num[] = {98,56,45,32,29,12,5,3,1};
    ll n = sizeof(num) / sizeof(ll);
    ll key = 89;
    ll index = binary_search(num, n, key);
    if (index == (-1))
    {
        cout << key << " is not present inside the array" << endl;
    }
    else
    {
        cout << key << " is present inside the array at index " << index << endl;
    }
    return 0;
}