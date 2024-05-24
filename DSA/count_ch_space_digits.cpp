#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;

int main(){
    char ref;
    ref=cin.get();
int cha=0;
int spc=0;
    int dg=0;
    while(ref!='\n'){
        if(ref>='0' && ref<='9'){
            dg++;
        }
        else if((ref>='a' && ref<='z') ||(ref>='A' && ref<='Z') ){
            cha++;
        }
        if(ref==' ' || ref=='\t'){
            spc++;
        }
        ref=cin.get();
    }
    cout<<"The total number of characters in string is: "<<cha<<endl;
    cout<<"The total number  of digits in string is: "<<dg<<endl;
    cout<<"The total number of spaces in string is: "<<spc<<endl;
return 0;
}