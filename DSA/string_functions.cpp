#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;

int main(){
char a[1000]="apple";
char b[1000];

//we can check the size/length of string like this ------>
cout<<"Length of a is "<<strlen(a)<<endl;
//we can copy one string into another by strcpy function
// syntax ------> strcpy(destination string, source string);
strcpy(b,a);
cout<<b<<endl;
// we can compare 2 strings by strcmp function it returns 0 if strings are equal return something else if not
//syntax---------> strcmp(a,b);
cout<<strcmp(a,b)<<endl;
//we can combine 2 strings by strcat function------>
char web[1000]="www.";
char domain[1000]="code_with_harry.com";
cout<<strcat(web,domain)<<endl;

strcpy(b,strcat(web,domain));
cout<<strcmp(a,b)<<endl;
cout<<strcmp(b,a)<<endl;

return 0;
}