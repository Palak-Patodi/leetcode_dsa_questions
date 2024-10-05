class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int posIndex = 0, negIndex = 1; 
        
        while (posIndex < n && negIndex < n) {
            
            while (posIndex < n && nums[posIndex] > 0) {
                posIndex += 2;
            }

            while (negIndex < n && nums[negIndex] < 0) {
                negIndex += 2;
            }

            if (posIndex < n && negIndex < n) {
                swap(nums[posIndex], nums[negIndex]);
            }
        }

        return nums;
    }
};
