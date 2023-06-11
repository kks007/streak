#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int ans = 0;
        int curr_area = 0;

        while (l < r) {
            int param = min(height[l], height[r]);
            curr_area = param * (r - l);
            
            if (curr_area > ans)
                ans = curr_area;
            
            if (height[l] < height[r])
                l++;
            else
                r--;
        }
        
        return ans;
    }
};
