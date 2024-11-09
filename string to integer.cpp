//time complexity:O(n)
//space complexity:O(1)
class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();
        int sign = 1;
        long result = 0;

        while (i < n && s[i] == ' ') {
            i++;
        }

        if (i < n && (s[i] == '+' || s[i] == '-')) {
           if(s[i]=='+')
           sign=1;
           if(s[i]=='-')
           sign=-1;
           i++;   
        }

        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
            if (result * sign > INT_MAX) {
                return INT_MAX;
            } else if (result * sign < INT_MIN) {
                return INT_MIN;
            }
            i++;
        }

        return result * sign;
    }
};
