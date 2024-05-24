#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
#include "hashing.h"
using namespace std;

int main()
{
    // string hello;
    Hashtable<int> h;
    h.insert("mango", 100);
    h.insert("pizza", 500);
    h.insert("coke", 700);
    h.insert("burger", 50);
    h.insert("roll", 900);

    // cout<<"Old Hash table was"<<endl;
    // h.print();

    // cout<<endl;
    // h.erase("burger");
    // cout<<endl;

    // cout<<"New Hash table is"<<endl;
    // h.print();
    // string item;
    // cout<<"Enter the name of item to be searched"<<endl;
    // cin>>item;

    // int * price=h.search(item);

    // if(price==NULL){
    //     cout<<"ERROR 404 Item not found";
    // }
    // else{
    //     cout<<"The price of the item is "<<*price;
    // }
    h["momo"] = 150;
    cout << "old price of momo is " << h["momo"] << endl;
    h["momo"] += 50;
    cout << "new price of momo is " << h["momo"] << endl;
    // cout<<"Value of coke is "<<h.search("coke");

    return 0;
}