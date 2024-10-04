#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0, count = 0;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;  // Set current element as candidate
            }
            
            if (num == candidate) {
                count++;  // Increment if it matches the candidate
            } else {
                count--;  // Decrement if it doesn't match
            }
        }

        return candidate;
    }
};
