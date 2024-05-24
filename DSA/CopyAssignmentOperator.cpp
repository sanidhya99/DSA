#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;
/*
basically when a copied object points to the same memory of the original object from which it had been copied it acquires all the properties of it  and on any change in copied object change is reflected in the original object also
-------------> this is called shallow copy 

wehereas when to copy data of an object in another we create a new dynamic data and then copy original data into it then if we change the data of copied object no changes are reflected in the original object -----------> this is deep copy

*/
class product{
private:
int id;
char *name;
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
    name=new char[strlen(n)+1];
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
    name=new char[strlen(x.name)+1];
    strcpy(name,x.name);
    selling_price=x.selling_price;
    show_details();
}
void operator=(product &x){
    id=x.id;
    mrp=x.mrp;
    name=new char[strlen(x.name)+1];
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
void setname(char *n){
    strcpy(name,n);
}
};

int main(){

product ak47(1,"ak47",10000,9590);
//two ways to use copy constructor are:
product uzi=ak47;//way 1
uzi.setname("uzi");
ak47.show_details();
uzi.show_details();



return 0;
}