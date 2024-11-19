#include <bits/stdc++.h>
using namespace std;

int precedence(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return -1;
}

string infix_to_prefix(string s) {
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(')
             s[i] = ')';
        else if (s[i] == ')')   
             s[i] = '(';
    }

    stack<char> st;
    string ans = "";

    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i]) || isdigit(s[i])) {
            ans += s[i];
        } else if (s[i] == '(') {
            st.push(s[i]);
        } else if (s[i] == ')') {
            while (!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            if (!st.empty())
             st.pop();
        } else {
            if(s[i]=='^'){
                while (!st.empty() && precedence(st.top()) >precedence(s[i])) {
                    ans += st.top();
                    st.pop();
                }
            }
            else{
                while (!st.empty() && precedence(st.top()) >= precedence(s[i])){
                    ans += st.top();
                    st.pop();
                }
            }
            st.push(s[i]);
        }
    }

    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    string s;
    cin >> s;
    cout << infix_to_prefix(s) << endl;
    return 0;
}
