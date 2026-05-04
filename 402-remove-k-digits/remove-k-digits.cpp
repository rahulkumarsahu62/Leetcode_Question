class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        int n = num.length();

        for(int i = 0; i<n ;i++){
            while(!st.empty()  && st.top() > num[i] && k>0){
                st.pop();
                k--;
            }
            if(!st.empty() || num[i] !='0'){
                st.push(num[i]); // to avoid the case when we have preceeding zeroes
            }
        }
        while(!st.empty()  &&  k > 0){
            st.pop();
            k--;
        }
       
        // Convert stack to string
        string result = "";
        while(!st.empty()) {
            result += st.top();
            st.pop();
        }

        reverse(result.begin(), result.end());

        return result.empty() ? "0" : result;
    }
};