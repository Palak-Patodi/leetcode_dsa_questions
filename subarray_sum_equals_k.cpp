#include <vector>

class Solution {
public:
    int subarraySum(std::vector<int>& nums, int k) {
        int count = 0;
        for (int start = 0; start < nums.size(); ++start) {
            int current_sum = 0;

            for (int end = start; end < nums.size(); ++end) {
                current_sum += nums[end];  
                if (current_sum == k) {
                    count++;
                }
            }
        }

        return count;
    }
};

