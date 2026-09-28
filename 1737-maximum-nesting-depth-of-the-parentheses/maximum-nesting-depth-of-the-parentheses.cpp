class Solution {
public:
    int maxDepth(string s) {
        int counter = 0;
        int maxDepth = 0;
        for(int i =0; i<s.length();i++){
            if (s[i] == '('){
                counter++;
                maxDepth = max(counter,maxDepth);
            }
            else if (s[i] == ')'){
                counter--;
            }
        }
        return maxDepth;
    }
};