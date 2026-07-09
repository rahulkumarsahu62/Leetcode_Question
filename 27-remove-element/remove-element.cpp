class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      int i = 0; 
      for(int j =0; j<nums.size();j++){
        if(nums[j] != val){
            int temp = nums[j];
            nums[i] = nums[j];
            nums[i] = temp;
            i++;
        }
      }
      return i;
    }
};