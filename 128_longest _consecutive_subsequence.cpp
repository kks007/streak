#include <bits/stdc++.h>

using namespace std;

/// optimum sol: O(n)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(), nums.end());
        int longest = 0;
        for(auto &n: s){
            if(!s.count(n - 1)){
                int length = 1; 
                while(s.count(n + length))
                    ++length;
                longest = max(longest, length);
            } 

        }
        return longest;
    }
};


/// sorting method O(n log n) ::: 

// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         if (nums.size() == 0)
//             return 0;

//         sort(nums.begin(), nums.end());

//         int gc = 1;
//         int ac = 1;

//         for (int i = 1; i < nums.size(); i++) {
//             if (nums[i] == nums[i - 1]) {
//                 continue; // Skip duplicates
//             } else if (nums[i] == nums[i - 1] + 1) {
//                 ac++;
//             } else {
//                 gc = max(gc, ac);
//                 ac = 1;
//             }
//         }

//         return max(gc, ac);
//     }
// };