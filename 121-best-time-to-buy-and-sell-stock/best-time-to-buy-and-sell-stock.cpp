class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxi = 0;
        if(n == 0){
            return maxi;
        }
        int rG = prices[n-1];
        for(int i = n-2; i>=0;i--){
            int profit = rG - prices[i];
            maxi = max(maxi,profit);
            rG = max(rG,prices[i]);
        }
        return maxi;
    }
};