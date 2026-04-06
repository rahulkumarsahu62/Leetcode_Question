class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
          unordered_map<int,int> mpp;
        mpp[0] = 1;
        int preSum = 0, cnt = 0;
        for(int i =0;i<nums.size();i++){
            preSum += nums[i]%2;
            int remove = preSum - k;
            cnt += mpp[remove]; // check in the map
            
            mpp[preSum] += 1;
        }
        return cnt;
    }
};