//time complexity:O(n^2)
//space complexity:O(1)
class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int totalBeauty = 0;

        for (int i = 0; i < n; i++) {
            unordered_map<char, int> freq; 

            for (int j = i; j < n; j++) {
                freq[s[j]]++; 

                int maxFreq = 0;
                int minFreq = INT_MAX;

                for (auto& entry : freq) {
                    maxFreq = max(maxFreq, entry.second);
                    minFreq = min(minFreq, entry.second);
                }

                totalBeauty += (maxFreq - minFreq);
            }
        }

        return totalBeauty;
    }
};


