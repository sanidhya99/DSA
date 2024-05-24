#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;

class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};

int ind=0;
void MyStack :: push(int x)
{
    arr[ind]=x;
    ind++;
    top=x;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    ind--;
    if(ind==-1){
        ind=0;
        return -1;
    }
    int ref=arr[ind];
    
    
    return ref;
}
int main(){
    MyStack s;
    s.push(49);
    cout<<s.pop()<<" ";
    s.push(29);
    cout<<s.pop()<<" ";
    cout<<s.pop()<<" ";
    cout<<s.pop()<<" ";
    s.push(67);
    cout<<s.pop()<<" ";


return 0;
}