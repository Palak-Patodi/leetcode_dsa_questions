//complexity:O(n)
class Solution {
public:
    stack<int>st;
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
            stack<int> st;
            unordered_map<int, int> next_greater_map;
            for (int i = nums2.size() - 1; i >= 0; --i) {
                while (!st.empty() && st.top() <= nums2[i]) st.pop();
                next_greater_map[nums2[i]] = st.empty() ? -1 : st.top();
                st.push(nums2[i]);
            }
            vector<int> result;
            for (int num : nums1) result.push_back(next_greater_map[num]);
            return result;
                
        }
};