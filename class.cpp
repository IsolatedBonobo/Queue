#include<iostream>
using namespace std;
class Queue{
    public:
    int *arr;
    int front;
    int rear ;
    int size;
    Queue(int size){
        this-> size = size;
        arr = new int[size];
        front = 0;
        rear = 0;

    }
    void push(int data){
        if(rear == size){
            cout<<"queue is full"<<endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }
    void pop(){
        if(front == rear ){
            cout<<"Queue is empty"<<endl;
        }
        arr[front] = -1;
        front ++;
        // now utilising memory  
        if(front == rear){
            front = 0;
            rear = 0;
        }
    }
  
    int getfront(){
        if(rear == front ){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        else
        return arr[front];
    }
    bool isempty(){
        if(front == rear ){
            return true;
        }
        else
        return false;
    }
    int getsize(){
        return rear - front ;
        
    }
};
int main(){
    Queue q(7);
    q.push(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(6);
    cout<<q.isempty()<<endl;
    q.push(82);
    q.push(82);
    q.pop();
    q.pop();
    cout<<q.getfront()<<endl;
    cout<<q.isempty()<<endl;
    cout<<(-1)%5;
}