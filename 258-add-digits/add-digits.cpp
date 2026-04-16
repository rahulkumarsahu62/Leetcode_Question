class Solution {
public:
    int addDigits(int num) {
        int n = num;
        
        for(int i = 0; i < n; i++){
            if (n == 0) return 0;
            else if (n % 9 == 0)return 9;
            else return n % 9;
        }
        return 0;
    }
};