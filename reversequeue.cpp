#include<iostream>
#include<queue>
using namespace std;
void reversequeue(queue<int>&q){
    // base case 
    if(q.empty()){
        return;
    }
    int element = q.front();
    q.pop();
    // recursive call
    reversequeue(q);
    q.push(element);

}
int main(){
    queue<int>q;
    q.push(8);
    q.push(2);
    q.push(9);
    q.push(6);
    q.push(3);

    reversequeue(q);
    while(!q.empty() ){
        cout<<q.front()<<" ";
        q.pop();
    }
}