#include <bits/stdc++.h>

using namespace std;



//// optimised method : two pointer::


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0, l = 0, r = 0;
        while (r < prices.size()){
            if (prices[r] > prices[l])
                maxP = max(maxP, prices[r] - prices[l]);
            else
                l = r;
            ++r;
        }
        return maxP;
    }
};

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int least_so_far = INT_MAX;
//         int overall_profit = 0;
//         int profit_temp = 0;

//         for(int i = 0; i < prices.size(); i++){
//             if(prices[i] < least_so_far){
//                 least_so_far = prices[i];
//             }
//             profit_temp = prices[i] - least_so_far;
//             if(overall_profit < profit_temp){
//                 overall_profit = profit_temp;
//             }
//         }
//         return overall_profit;
        
//     }
// };

