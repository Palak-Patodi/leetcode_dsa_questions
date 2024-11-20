//complexity:O(n)
 class Solution {
                  public:
                    string preToInfix(string exp) {
                        stack<string> st;
                        for (int i=exp.size()-1;i>=0;i--) {
                            if (isalpha(exp[i]) || isdigit(exp[i])) {
                                st.push(string(1, exp[i]));
                            } else {
                                string t1 = st.top();
                                st.pop();
                                string t2 = st.top();
                                st.pop();
                                string ans = "(" + t1 + exp[i] + t2 + ")";
                                st.push(ans);
                            }
                        }
                        return st.top();
                    }
                };