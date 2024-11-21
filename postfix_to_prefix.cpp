class Solution {
  public:
    stack<string>st;
    string postToPre(string post_exp) {
        // Write your code here
        for(int i=0;i<post_exp.size();i++){
            if(isalpha(post_exp[i])||isdigit(post_exp[i])){
               st.push(string(1, post_exp[i]));
            }
            else{ 
                string t1=st.top();
                st.pop();
                string t2=st.top();
                st.pop();
                
                string temp = string(1, post_exp[i]) + t2 + t1;
                st.push(temp);
            }
        }
        
        return st.top();
    }
};