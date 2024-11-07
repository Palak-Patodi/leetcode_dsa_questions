//time complexity=O(nlogn)
//space complexity=O(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)
        return true;
        else return false;
    }
};


//timecomplexity:O(n)
//space complexity:O(k)where k is no. of unique element in map


#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false; 
        }

        unordered_map<char, int> p;
        unordered_map<char, int> q;

        for (int i = 0; i < s.length(); i++) {
            p[s[i]]++;
        }

        for (int j = 0; j < t.length(); j++) {
            q[t[j]]++;
        }
        
        return p == q;
    }
};
