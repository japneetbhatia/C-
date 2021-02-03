class Solution {
public:
    int specialArray(vector<int>& nums) {
        int ans = 0;
        int ctr = nums.size();
        for(int i = 0; i < ctr; i++){
            if(nums[i] > ctr)
                ans++;
        }
        return ans>= ctr ? ans : -1;
    }
};
