class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        int m = goal.length();

        if(n != m){
            return false;
        }
        for(int i = 1; i<= n; i++){
            rotate(begin(s),begin(s)+1,end(s));

            if(s == goal){
                return true;
            }
        }
        return false;
    }
};