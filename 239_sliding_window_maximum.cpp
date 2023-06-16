#include <bits/stdc++.h>

using namespace std;

// using dequeue: O(n):

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> result;
        
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            while (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }
            
            while (!dq.empty() && nums[dq.back()] < nums[i]) {
                dq.pop_back();
            }
            
            dq.push_back(i);
            
            if (i >= k - 1) {
                result.push_back(nums[dq.front()]);
            }
        }
        
        return result;
    }
};






///// using map O(n log k)


// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         map<int,int> mp;
//         for(int i=0;i<k;i++){
//             mp[nums[i]]++;
//         }
//         int i=0;
//         vector<int> ans;
//         auto it=mp.rbegin();
//         ans.push_back(it->first);
//         while(i+k<nums.size()){
//             mp[nums[i]]--;
//             mp[nums[i+k]]++;
//             if(mp[nums[i]]==0)mp.erase(nums[i]);
//             auto it=mp.rbegin();
//             ans.push_back(it->first);
//             i++;
//         }
//         return ans;
//     }
// };



// brute force (tle) :
// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         int n = nums.size();
//         vector<int> ans;

//         if (n == 0) {
//             return ans;
//         }

//         for (int i = 0; i <= n - k; i++) {
//             int current_max = nums[i];
//             for (int j = i + 1; j < i + k; j++) {
//                 current_max = max(current_max, nums[j]);
//             }
//             ans.push_back(current_max);
//         }

//         return ans;
//     }
// };
