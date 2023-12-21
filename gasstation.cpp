#include<iostream>
#include<queue>
using namespace std;
int canCompletecircuit(vector<int>&gas, vector<int>& cost){
    int deficit = 0;
    int balance = 0 ;
    int start = 0;
    for(int i =0;i<gas.size();i++){
        balance += gas[i] - cost[i];
        if(balance < 0){
            deficit = balance ;
            start = i + 1;
            balance = 0 ;
        }
    }
        if(deficit + balance >= 0)
        return start;
        else
        return -1;
}
int main(){
    vector<int>gas = {1,2,3,4,5} ;
    vector<int>cost = {5,4,3,1,2};
    int a = canCompletecircuit(gas, cost);
    cout<<a;
}