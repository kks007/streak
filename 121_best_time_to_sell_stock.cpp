#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int least_so_far = INT_MAX;
        int overall_profit = 0;
        int profit_temp = 0;

        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < least_so_far){
                least_so_far = prices[i];
            }
            profit_temp = prices[i] - least_so_far;
            if(overall_profit < profit_temp){
                overall_profit = profit_temp;
            }
        }
        return overall_profit;
        
    }
};

int main(){

}