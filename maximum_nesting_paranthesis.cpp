//commented code is showing runtime error
/*class Solution {
public:
    int maxDepth(string s) {
        vector<int>p;
        int count;
        int pointer1=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                pointer1++;
                count=pointer1;
                p.push_back(pointer1);
            }
            if(s[i]==')'){
                 pointer1--;
            }
        }
        int q=*max_element(p.begin(),p.end());
        return q;
    }
};*/


//time complexity:O(n)
//space complexity:O(1)
class Solution {
public:
    int maxDepth(string s) {
        int maxdepth=0;
        int currentdepth=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                currentdepth++;
                maxdepth=max(currentdepth,maxdepth);
            }
            if(s[i]==')'){
                currentdepth--;
            }
        }
        return maxdepth;
    }
};