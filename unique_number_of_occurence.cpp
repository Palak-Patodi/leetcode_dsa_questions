#include <vector>
#include <algorithm>

class Solution {
public:
    bool uniqueOccurrences(std::vector<int>& arr) {
        std::sort(arr.begin(), arr.end());
        
        int count = 1;
        std::vector<int> counts;
        
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] == arr[i - 1]) {
                count++;
            } else {
                counts.push_back(count);
                count = 1;
            }
        }
        counts.push_back(count);
        
        std::sort(counts.begin(), counts.end());
        for (int i = 1; i < counts.size(); i++) {
            if (counts[i] == counts[i - 1]) {
                return false;
            }
        }
        
        return true;
    }
};
