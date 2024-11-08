//time complexity:O(nlogn)
//space complexity:O(n)
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freqMap;
        for (char c : s) {
            freqMap[c]++;
        }
        vector<pair<char,int>>freqvect;
         for (const auto& entry : freqMap) {
         freqvect.push_back(entry);
        }

        sort(freqvect.begin(),freqvect.end(),[](const pair<char, int>& a, const pair<char, int>& b) {
    return a.second > b.second; 
});
        
        string result;
        for (int i = 0; i < freqvect.size(); i++) {
            result.append(freqvect[i].second, freqvect[i].first); 
        }
        return result;
  }
};aa