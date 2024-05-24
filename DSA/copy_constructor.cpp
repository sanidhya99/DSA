#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;
/*
Copy Constructor:
->it basically copies all details of one object into another 
->all classes have a default copy constructor inbuilt 
-> we can also make a copy constructor of our own to overwrite default copy constructor
->if we make our own copy constructor we have to call object by reference in it like product(product &x) 
*/
class product{
private:
int id;
char name[100];
int mrp;
int selling_price;

public:
product(){
    show_details();
}
void show_details(){
    cout<<"Name : "<<name<<endl;
    cout<<"ID : "<<id<<endl;
    cout<<"MRP : "<<mrp<<endl;
    cout<<"SP : "<<selling_price<<endl;
}

product(int id,char *n,int mrp,int selling_price){
    this->id=id;
    this->mrp=mrp;
    this->selling_price=selling_price;
    strcpy(name,n);
    show_details();
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
product(product &x){
    id=x.id;
    mrp=x.mrp;
    strcpy(name,x.name);
    selling_price=x.selling_price;
    show_details();
}
int get_mrp(){
    return mrp;
}
int get_sp(){
    return selling_price;
}
};

int main(){

product s(1,"gun",10000,9590);
//two ways to use copy constructor are:
product uzi(s);//way 1
product ak47=uzi;//way 2


return 0;
}