// adress of (&) operator is used to refer to address of any variable or data in system memory 
// adress is always a hexadecimal number
#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;

int main(){
int a=56;
int b=89;
cout<<"The address of a is "<<&a<<"\nThe adress of b is "<<&b<<endl;
int* ptr=&a;//-------->pointer variable
int* *dptr=&ptr;//-------->pointer of pointer variable
cout<<*dptr;//----------->derefrence variable used to deref a pointer variable and get value from an address
int x=10;
int &y=x;//-------> reference variable ,in this we assign the address of variable x as address of variable y also 
//so basically now both variables are pointing towards same data in memory;
x++;
y++;
//both these commands will change the value of x and y both;
cout<<x<<endl<<y<<endl;
return 0;
}