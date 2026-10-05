class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<char> st;
        int count = 0;
        int depth = 0;
        for(int i = 0; i<s.length();i++){
            if(s[i] == '('){
                st.push(s[i]);
                depth++;
            }
            else{
                if (st.empty()) return 0;
            
                st.pop();
                depth--;

                if(s[i-1] == '('){
                    count += pow(2,depth);
                }
            }
        }
        return count;
    }
};