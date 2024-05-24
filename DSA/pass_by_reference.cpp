#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;
void money(int &income){  //---------->pass by reference (reference variable method)  
int taxp=0.10;
income=income*(1-taxp);

}
void view(int * v){    //----------------->pass by reference (pointer method)  
*v+=100;
}
int main(){
ll t;
cin>>t;
while(t--){
int views=100,income=100;
cout<<views<<" "<<income<<endl;
money(income);
view(&views);
cout<<views<<" "<<income<<endl;

}
return 0;
}