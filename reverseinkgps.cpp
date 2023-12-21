#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverseinK(queue<int>&q, int k){
    stack<int>s;
    int count = 0;
    if(k <= 0 || k > q.size()){
        return ;
    }
    while(!s.empty()){
        int temp = q.front();
        q.pop();
        s.push(temp);
        count ++;
        if(count == k)
        break;

    }
    // step 2
    while(!s.empty()){
        int temp = s.top();
        s.pop();
        q.push(temp);
    }
    //  step 3
    count = 0;
    while(!q.empty() && q.size()){
        int temp = q.front();
        q.pop();
        q.push(temp);
        count ++;
        if(count == q.size() - k)
        break;
    }


}
int main(){
    queue<int>q;
    q.push(4);
    q.push(2);
    q.push(1);
    q.push(8);
    q.push(6);
    q.push(5);
    int k = 3;
    int count = 0;
    
    reverseinK(q, k);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }


}