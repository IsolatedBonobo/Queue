#include<iostream>
#include<deque>
#include<vector>
using namespace std;
void solve(vector<int>arr, int n, int k){
    deque<int>q;

    // first window ko hm hi process krenge 
    for(int i =0;i<k;i++){
        if(arr[i] < 0)
        q.push_back(i);
    }

    // remaining window ki processing 

    for(int i =k;i<n;i++){
        // purani window ka ans nikalna 
        if(q.empty())
        cout<<"0 ";
        else
        cout<<arr[q.front()]<<" ";

    // remove those elements joo window ke bahar hai 
        while(!q.empty() && (i - q.front() >= k)){
            q.pop_back();
        }

        // checking currnt element for insertion 
        if(arr[i] < 0){
            q.push_back(i);
        }
    }

    // last window ka ans print krna hota hai 
    if(q.empty())
    cout<<"0 ";
    else
    cout<<arr[q.front()]<<" ";


}

int main(){
    vector<int>arr = {1,2,3,-4,5,6,7,8};

    int k = 3;
    int n = 8;

    solve(arr, n, k);
}