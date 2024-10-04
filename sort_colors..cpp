class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;            // Pointer for 0s (red)
        int mid = 0;            // Pointer for traversing the array
        int high = nums.size() - 1;  // Pointer for 2s (blue)

        while (mid <= high) {
            if (nums[mid] == 0) {
                // Swap nums[mid] with nums[low] and move both pointers forward
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                // Leave 1s in the middle, just move mid pointer forward
                mid++;
            }
            else {
                // Swap nums[mid] with nums[high] and move high pointer backward
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
