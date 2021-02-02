class Solution {
public:
    int countDigit(int n)
    {
      int ctr=0;
      int num = n;
      while(num!=0){
        num /= 10;
        ctr++;
      }
      return ctr;
    }
    int findNumbers(vector<int>& nums) {
        int ctr = 0;
        for(int i = 0; i< nums.size(); i++){
            int len = countDigit(nums[i]);
            if(len%2==0) ctr++;
        }
        return ctr;
    }
};
