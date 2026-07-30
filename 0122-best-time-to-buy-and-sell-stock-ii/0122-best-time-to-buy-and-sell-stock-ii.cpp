class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int mini = prices[0];
        int profit = 0;
        int curr_profit=0;
        int ans=0;
        for (int i = 1; i < prices.size(); i++) {

            mini = min(mini, prices[i]);
            curr_profit=prices[i] - mini;
            profit = max(profit, prices[i] - mini);
            if(curr_profit<profit)
            {
                ans+=profit;
                mini=prices[i];
                profit=0;
            }
            
        }

        return ans+profit;
    }
};