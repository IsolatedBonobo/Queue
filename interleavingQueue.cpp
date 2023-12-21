#include<iostream>
#include<queue>
using namespace std;
void interleavingQueue(queue<int>&q){
    int n = q.size();
    if(n == 0)
    return;

    // step 1: seprating the two halves
    int k = n/2;
    int count = 0;
    queue<int>q2;
    while(!q.empty()){
        int element = q.front();
        q2.push(element);
        q.pop();
        count ++;
        if(count == k)
        break;
    }
    // step 2: interleaving started 
    while(!q.empty() && !q2.empty()){
        int element = q2.front();
        q2.pop();

        q.push(element);

        int second = q.front();
        q.pop();

        q.push(second);
    }
    // odd wala case sambhalana 

    if(n&1){
        int element = q.front();
        q.pop();
        q.push(element);
    } 

}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    interleavingQueue(q);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    
}