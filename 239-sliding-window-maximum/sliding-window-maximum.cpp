class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;  // stores indices
        vector<int> result;

        for(int i = 0; i<nums.size();i++){

            if(!dq.empty() && dq.front() == i-k){ // Remove indices out of window
                dq.pop_front();
            }

            while(!dq.empty() && nums[dq.back()] < nums[i]){ // Remove smaller elements from the back
                dq.pop_back();
            }
            dq.push_back(i);

            if (i >= k - 1) {
             result.push_back(nums[dq.front()]);
            }
        }
        return result;
    }
};