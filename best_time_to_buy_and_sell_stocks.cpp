#include <vector>
#include <algorithm> // For std::max

class Solution {
public:
    int maxProfit(const std::vector<int>& prices) {
        if (prices.empty()) {
            return 0;
        }

        int minPrice = prices[0]; 
        int maxProfit = 0; 

        for (int i = 1; i < prices.size(); ++i) {
            int profit = prices[i] - minPrice;
            maxProfit = std::max(maxProfit, profit);
            minPrice = std::min(minPrice, prices[i]);
        }

        return maxProfit;
    }
};
