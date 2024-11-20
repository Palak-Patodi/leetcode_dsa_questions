class Solution {
  public:
    string postToInfix(string exp) {
        stack<string> st;
        for (int i = 0; i < exp.size(); i++) {
            if (isalpha(exp[i]) || isdigit(exp[i])) {
                st.push(string(1, exp[i]));
            } else {
                string t1 = st.top();
                st.pop();
                string t2 = st.top();
                st.pop();
                string ans = "(" + t2 + exp[i] + t1 + ")";
                st.push(ans);
            }
        }
        return st.top();
    }
};