class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mpp;
        mpp[0] = -1;

        int currSum = 0;
        int maxLen = 0;

        for(int i =0;i<nums.size();i++){
            if(nums[i] == 0)
               currSum += -1;
            else
                currSum += 1;


            if(mpp.find(currSum) != mpp.end()){
                maxLen = max(maxLen, i-mpp[currSum]);
            }    
            else{
                mpp[currSum] = i;
            }
        }
        return maxLen;
    }
};