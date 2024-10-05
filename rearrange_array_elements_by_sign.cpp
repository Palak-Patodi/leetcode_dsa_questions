class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        
        int posIndex = 0, negIndex = 1;
        
        for (int num : nums) {
            if (num > 0 && posIndex < n) {
                result[posIndex] = num;
                posIndex += 2;  
            } else if (num < 0 && negIndex < n) {
                result[negIndex] = num;
                negIndex += 2; 
            }
        }
        
        return result;
    }
};

