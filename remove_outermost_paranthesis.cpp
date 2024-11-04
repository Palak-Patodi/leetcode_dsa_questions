//time and space complexity:O(n)


class Solution {
public:
    string removeOuterParentheses(string s) {
         string result;
        int balance = 0;

        for (char c : s) {
            if (c == ')') balance--;
            if (balance > 0) result += c;
            if (c == '(') balance++;
        }

        return result;
    }
};