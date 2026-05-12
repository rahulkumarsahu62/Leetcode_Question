class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long  n = nums.size();

        long long expectedSum = n *(n + 1)/2;
        long long expectedsquareSum = n *(n+1)*(2*n+1)/6;

        long long actualSum = 0;
        long long actualsquareSum = 0;

        for(int x : nums){
            actualSum += x;
            actualsquareSum += 1LL * x *x;
        }
        long long diff1 = actualSum - expectedSum;  // x-y
        long long diff2 = actualsquareSum - expectedsquareSum; // x^2 -y^2

        long long sumXY = diff2 / diff1;  // x+y = x^2 -Y^2 / x-y

        long long duplicate = (diff1 + sumXY)/2;   
        long long missing = sumXY - duplicate;

        return {(int)duplicate,(int)missing};
    }
};