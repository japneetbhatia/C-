class Solution {
public:
    int trap(vector<int>& height) {
        int res = 0,left,right;
        int n = height.size();
    for(int i =1; i<n-1; i++)
    {
        left = height[i];
        for(int j =0; j<i; j++)
        {
            left =max(height[j],left);
        }
        
        right = height[i];
        for(int j =i+1; j<n; j++)
        {
            right =max(height[j],right);
        }
        
        res+= min(left,right) - height[i];
        
        
    }
    return res;
    }
};
