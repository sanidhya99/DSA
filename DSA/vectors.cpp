// #include<iostream>
#include <bits/stdc++.h>
// #include<string>
// #include <vector>

using namespace std;

int main()
{
    // fill constructor
    vector<int> sol(7, 2);
    cout << sol.size() << endl;
    for (int i = 0; i < sol.size(); i++)
    {
        cout << sol[i] << " ";
    }

    /*
    declaration of vector----->
    vector < data-type > vector_name;
    input function------->
    vector_name.push_back();
    sorting of vector----->
    sort(vector_name.begin(),vector_name.end());
    erase an element of particular index--------->
    vector_name.erase(index);
    vector_name.erase(starting position index , ending position index);
    iteration is an addressal to a particular index used as a refrence for other indices
    prlling elements in vectors are just like array
    cout<<vector_name[index];
    */

    return 0;
}
/*
there is a size of a vector that is the total number of elements  presents in vector
and there is a capacity of vector that is the actual size of vector(max number of elements it can accomodate
whenever the size of vector becomes greater than the capacity of vector  the vector doubles its capacity
and initialize the remaining elements by 0
eg: if capacity is 5 and we insert 6 elements that is size is 6 then capacity becomes 10 and 4 remaining elements
which are not yet push backed initializes with 0)
to see demo just run this code------------>
-------------------------------------
{

    #include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;

int main(){
vector<int>sol={1,2,3,4,5};
cout<<sol.capacity();
return 0;
}

}
------------------------------------
*/