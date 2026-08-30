class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bp = INT_MAX;
        int mp = 0;

        for (int i = 0; i < prices.size(); i++) {
            if (bp < prices[i]) {
                int profit = prices[i] - bp;
                mp = max(profit, mp);
            } else {
                bp = prices[i];
            }
        }

        return mp;
    }
};