#include<iostream>
#include<deque>
#include<vector>
using namespace std;
vector<int> maxislidingwindow(vector<int> &nums, int k) {
    deque<int> dq;
    vector<int>ans;

    // processing first window
    for(int i =0;i<k;i++){
        // removing that chote elements 
        while(!dq.empty() && nums [i] >= nums[dq.back()]){
            dq.pop_back();
        }

        // inserting index 
        dq.push_back(i);
    }
    // storing ans
    ans.push_back(nums[dq.front()]);
    for(int i =k;i<nums.size();i++){
        // put pf windpq element ko remove kro 
        if(!dq.empty() && i - dq.front() >= k)
        dq.pop_front();

        // dleting smaller elment in compairson with current element 
        while(!dq.empty() && nums[i] >= nums[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
        ans.push_back(nums[dq.front()]);
    }
    return ans;
}
int main(){
    vector<int>nums = {1,3,-1,5,2,6,7};
    int k = 3;
    vector<int>ans;
    ans = maxislidingwindow(nums, k);
    for(int i =0;i<ans.size;i++){
        cout<<ans[i]<<" ";
    }


}