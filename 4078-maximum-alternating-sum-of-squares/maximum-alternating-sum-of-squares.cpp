class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i =0; i<nums.size();i++){
            nums[i] = nums[i] * nums[i];
        }
        sort(nums.begin(),nums.end());

        long long ans = 0;
        int mid = nums.size()/2;

        for(int i = 0 ;i <nums.size(); i++){
            if(i < mid){
                ans -= nums[i];
            }
            else {
                ans += nums[i];
            }
        }
        return ans;
    }
};