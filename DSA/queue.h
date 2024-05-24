class MyQueue{
    int * arr;
    int front;
    int rear;
    int ms;
    int cs;
    public:
    MyQueue(int ds=5){
        ms=ds;
        arr=new int[ms];
        front=0;
        rear=ms-1;
        cs=0;
    }
    bool isfull(){

        return ms==cs;
    }
    void push(int d){
       if(!isfull()){

        rear=(rear+1)%ms;
        arr[rear]=d;
        cs++;
       }
    }
    bool isempty(){
        return cs==0;
    }
    void pop(){
       if(!isempty()){
        front=(front+1)%ms;
        cs--;
       }
    }
    int getfront(){
        if(!isempty()){
            return arr[front];
        }
        else{
            return -1;
        }
    }

};