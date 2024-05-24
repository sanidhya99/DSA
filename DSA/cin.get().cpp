#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;

int main(){
// to remove the glitch of cin that it can not read spaces we can use a different method that is cin.get()
// cin.get() can read all type of characters either null ,\n, or space but it reads only 1 character at a time 
// when u put input in ide and press enter  input goes to input buffer , from there cin.get() reads every character 
//one by one and store in array  form where we can easily out put it 
// for this we have to put a particular character at which cin.get() can stop else it can go on continously
char alph=cin.get();
int len=1;
while(alph!='#'){
    cout<<alph;
    len++;
    alph=cin.get();
    }
    cout<<endl<<len<<endl;
return 0;
}