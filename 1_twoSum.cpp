#include <bits/stdc++.h>

using  namespace std;


// map (better-optimal)

// finding if the complement of the element on index i exists in the map

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> mp;
        
        for(int i = 0; i< nums.size(); i++){
            if(mp.find(target - nums[i]) == mp.end())
                mp[nums[i]] = i;
            else
                return {mp[target - nums[i]], i};
        }
        return {0};
    }
};


// brute force: 

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i = 0; i< nums.size(); i++){
//             for(int j = 0; j < i; j++){
//                 if(nums[i] + nums[j] == target){
//                     return {i, j};
//                 }
//             }
//         }
//         return {0};
//     }
// };


// another method is 2 pointer approach, using sorted array (optimal)

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i = 0;i < nums.size();i++){
//             for(int j = i+1;j<nums.size();j++){
//             if(nums[i] + nums[j] == target) return {i,j};
//           }
//         }
//     return {};
//     }
// };