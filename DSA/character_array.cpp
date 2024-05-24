#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;

int main(){
//declaration of character array-->
char alph[100];

//char alp[100]={'a','b','c','d'};----->wrong initiation
//char alp[100]={'a','b','c','d','\0'};----->right initiation
//------------->this is also right initiation :->
// char alph[100]="abc";
//we can take input of charcter array by putting for loop as well as by cin also
cin>>alph;
// and can output a character array by normal cout also 
cout<<alph<<endl;
// but there is a limitation of cin that it dont take space
// for example if we give input 'code harry' so it will give output as 'code'
cout<<strlen(alph)<<endl;
cout<<sizeof(alph)<<endl;


return 0;
}