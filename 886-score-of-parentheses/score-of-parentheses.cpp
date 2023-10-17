class Solution {
public:
    int scoreOfParentheses(string s) {
         stack<int> st;
        st.push(0);
        for(auto i : s){
            if(i == '('){
                st.push(0);
            }
            else{
                
                int val = st.top();
                st.pop();
                int newval = 0;
                if(val!=0){
                    newval = val * 2;
                }
                else{                    
                    newval = 1;
                }
                st.top() += newval;                
            }
        }
        return st.top();
    }
};