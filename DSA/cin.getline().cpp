#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;

int main(){
    //instead of reading every character one by one by cin.get()  we can also use cin.getline() to input whole line or paragraph in one go 
    // syntax----->
    // cin.getline(array_name,limit of character,'stopping character');
    // this stopping character is optional if we dont pass it inside cin.getline() function it will by default take
    // it as '\n'
    char ref[1000];
    cin.getline(ref,1000,'!');
    cout<<ref<<endl;
return 0;
}