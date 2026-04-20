class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i,j;
        int value = 0;
        int n = colors.size();
        for(int i = 0 ; i< n; i++){
            for(int j = i+1; j<n;j++){
             if (colors[i]!=colors[j]){
                value = max(value,abs(i-j));
             }
            }
        }
        return value;
    }
};