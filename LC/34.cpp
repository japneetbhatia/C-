class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstpos = -1;
        int lastpos = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                firstpos = i;
                break;
            }
        }
        for(int i = nums.size()-1; i >= 0; i--){
            if(nums[i] == target){
                lastpos = i;
                break;
            }
        }
        vector<int> arr(2,0);
        arr[0] = firstpos;
        arr[1] = lastpos;
        return arr;
    }
};
