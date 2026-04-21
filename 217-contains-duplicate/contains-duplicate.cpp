class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int num;
        for(int i = 0;i<nums.size();i++){
            int num = nums[i];
            mp[num]++;

            if(mp[num]>1){
            return true;
        }
        }
        
        return false;
    }

};