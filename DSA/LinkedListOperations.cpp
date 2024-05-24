#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;
//--------------------------------------------------------------------------

//Creation of new node
class List;
class Node{
    //A node contains 2 things a data and a pointer to the next node tail will have next pointer as null in linear linked list and will have pointer of first node in linear linked list
int data;
public:
Node* next;
int getdata(){
    return data;
}
~Node(){
		if(next!=NULL){
			delete next;
		}
		cout<<"Deleting Node with Data"<<data <<endl;
	}
Node(int d):data(d),next(NULL){};//Initialisation of data when a new node is made 
friend class List;
};

//--------------------------------------------------------------------------

//Creation of a list

class List{

//list contains data of head and tail only because we access any linked list from these only

Node * head;
Node * tail;
int searchHelper(Node* start,int key){
    if(start==NULL){
        return -1;
    }
    else if(start->data==key){
        return 0;
    }
    int ans=searchHelper(start->next,key);
    if(ans==-1){
        return -1;
    }

    return ans+1;
}
public:
List():head(NULL),tail(NULL){};//initialisation of head and tail on creation of list (on creation both head and tail will be null)
Node* begin(){
    return head;
}

//----------------------------------------------
//Push Front        
void push_front(int data){
    if(head==NULL){
        Node * n=new Node(data);
        head=tail=n;
    }
    else{
        Node * n=new Node(data);
        n->next=head;
        head=n;
    }
}

//----------------------------------------------

//Push Back
void push_back(int data){
    if(head==NULL){
        Node * n=new Node(data);
        head=tail=n;
    }
    else{
       Node * n=new Node(data);
   tail->next=n;
   tail=n;
    }  
}

//----------------------------------------------

//Insert
void insert(int data, int pos){
    if(pos==0){
        push_front(data);
    }
    Node* temp=head;
    for(int i=1;i<=pos-1;i++){
        temp=temp->next;
    }
    Node * n=new Node(data);
    n->next=temp->next;
    temp->next=n;
}

//----------------------------------------------

//Linear Search
int search(int key){
    Node* ref=head;
    int ind=0;
    while(ref!=NULL){
        if(ref->data==key){
            return ind;
        }
        ind++;
        ref=ref->next;
    }
    //if not present
    return -1;
}

//----------------------------------------------

//Recursive Search in linked list
int recursiveSearch(int key){
    int ans=searchHelper(head,key);
    return ans;
}

//----------------------------------------------

//Deleting first node(head)
void pop_front(){
    Node* temp=head;
    head=temp->next;
    temp->next=NULL;
    delete temp;
}

//----------------------------------------------

//Deleting last node(tail)
void pop_back(){
    Node* temp=head;
    while(temp->next!=tail){
        temp=temp->next;
    }
    Node* del=temp->next;
    tail=temp;
    delete del;
    temp->next=NULL;
}

//----------------------------------------------

//Deleting node at specific position
void remove(int pos){
    Node* temp=head;
    for (int i = 0; i <(pos-1); i++)
    {
        temp=temp->next;
    }
    Node* del=temp->next;
    temp->next=del->next;
    del->next=NULL;
    delete del;  
}

//----------------------------------------------

//Reversing a linked list

void rev(Node* &head){
    Node *p=NULL;
    Node *c=head;
    Node* n;
    while(c!=NULL){
        n=c->next;
        c->next=p;

        c=n;
        p=c;

    }
    head=p;
}

//----------------------------------------------

//Deleting List
~List(){
    if(head!=NULL){
        delete head;
        head=NULL;
    }
}

//----------------------------------------------

};
int main(){
List l;
l.push_front(1);
l.push_front(0);
l.push_back(3);
l.push_back(4);
l.insert(2,2);
l.insert(10,3);
l.pop_back();
l.remove(3);
// l.rev();
//logic to print linked list
Node * head=l.begin();
while(head!=NULL){
    cout<<head->getdata()<<"->";
    head=head->next;
}
cout<<endl;
return 0;
}