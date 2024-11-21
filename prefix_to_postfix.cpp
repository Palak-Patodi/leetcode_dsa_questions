class Solution {
  public:
    stack<string>st;
    string preToPost(string pre_exp) {
        // Write your code here
        for(int i=pre_exp.size()-1;i>=0;i--){
            if(isalpha(pre_exp[i])||isdigit(pre_exp[i])){
               st.push(string(1, pre_exp[i]));
            }
            else{ 
                string t1=st.top();
                st.pop();
                string t2=st.top();
                st.pop();
                
                string temp = t1+t2+string(1, pre_exp[i]);
                st.push(temp);
            }
        }
        
        return st.top();
    }
};