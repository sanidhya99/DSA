#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;

//here  we will learn about bitwise operators which will be used in bit manipulation

//these operators basically manipulate the data at their binary representation

int main(){

//here we will talk in binary only 
//--------------------------------------------------------------------------------------------------------------------
//1) and operator [&] ( logic- if any one of value in & operator is 0 then its vaue will be 0)
/*
   truth table for &---->
    1&1=1
    1&0=0   
    0&1=0   
    0&0=0   
*/
//--------------------------------------------------------------------------------------------------------------------
/*
2) or operator [|] (logic- if any one value is 1 answer  will be 1 )

     truth table -------->
        1|1=1
        0|1=1
        1|0=1
        0|0=0
--------------------------------------------------------------------------------------------------------------------

3) xor ( exclusive or ) operator [^] ( logic - if both values are same answer will be 0 , but if both values are different answer will be 1)

     truth table----------->
        1^1=0
        0^0=0
        1^0=1
        0^1=1
------------------------------------------------------------------------------------------------------------------- 4) not ( negation ) operator [~] ( logic - {note - it operates on only 1 value } if value is 0 it gives 1 and if the value is 1 it gives 0 )
4) negation operator ~ 
     truth table----------->
       ~1=0 
       ~0=1 
*/
if(!0){
   cout<<"OK";
}
return 0;
}