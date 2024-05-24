template<typename T>
class Stack;

template<typename T>
class Node{
public:
T data;
Node<T>* next;
Node(T d){
    data=d;
    next=NULL;
}



};
template<typename T>
class Stack{
    Node<T>* head;
public:
Stack(){
    head=NULL;
}
void push(T d){
    
        Node<T>* temp=new Node<T>(d);
        temp->next=head;
        head=temp;
    
}
void push_bt(T d){
    Node<T>* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node<T>* ref=new Node<T>(d);
    temp->next=ref;
    ref->next=NULL;
    
}
bool empty(){
    return head==NULL;
}
T top(){
    return head->data;
}
void pop(){
    Node<T>* temp=head;
    head=head->next;
    delete temp;
}
};