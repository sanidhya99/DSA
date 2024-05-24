#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;
/*
Constructor:
->it is basically a function having name same as that of class 
->it automatically gets called on initialisation of object of class
->constructor is called only once for an object 
->there can be multiple constructors , then comes the concept of constructor overloading 
*/
class product{
private:
int id;
char name[100];
int mrp;
int selling_price;

public:
product(){
    cout<<"We are inside constructor"<<endl;
}
product(int id,char *n,int mrp,int selling_price){
    this->id=id;
    this->mrp=mrp;
    this->selling_price=selling_price;
    strcpy(name,n);
}
void setmrp(int m){
   if(m>0){
    mrp=m;
   }
   else{
    mrp=0;
   }
}
void setsp(int price){
    if(price<mrp){
        selling_price=price;
    }
    else{
        selling_price=mrp;
    }
}
int get_mrp(){
    return mrp;
}
int get_sp(){
    return selling_price;
}
};

int main(){
product o;
o.setmrp(100);
o.setsp(80);
cout<<"The mrp of this object is"<<o.get_mrp()<<endl;
cout<<"The sp of this object is"<<o.get_sp()<<endl;
product s(1,"gun",10000,9590);
cout<<"The mrp of this object is"<<s.get_mrp()<<endl;
cout<<"The sp of this object is"<<s.get_sp()<<endl;

return 0;
}