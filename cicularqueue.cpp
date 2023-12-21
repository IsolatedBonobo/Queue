#include<iostream>
using namespace std;
class cirQueue{
    public:
    int size;
    int *arr;
    int front ;
    int rear ;
    cirQueue(int size){
        this -> size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void push(int data){
        // if queue is full 
        if(front == 0 && rear == size - 1){
            cout<<"queue is full"<<endl;
        }
        else if(front == -1){
            front = rear = 0;
            arr[rear] = data;
        }
        else if(rear = size -1 && front != 0){
            rear = 0;
            arr[rear] = data;
        }
        else{
            rear++;
            arr[rear] = data;
        }
        
    }
};