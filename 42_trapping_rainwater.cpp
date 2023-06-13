#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;

        int maxL = height[i];
        int maxR = height[j];

        int result = 0;

        while(i < j){
            if(height[i] <= height[j]){
                i++;
                maxL = max(maxL, height[i]);
                result += maxL - height[i];
            }
            else{
                j--;
                maxR = max(maxR, height[j]);
                result += maxR - height[j];
            }
        }
        return result;
    }
};