#include <bits/stdc++.h>

using namespace std;


class Solution {
  public:
      bool containsDuplicate(vector<int>& nums) {
         unordered_map<int, int> mp;
         bool flag = false;
         for(auto i: nums){
             mp[i]++;
         }
         for(auto i: mp){
             if(i.second >= 2){
                 return true;
             }
         }
         return flag;
      }
  };