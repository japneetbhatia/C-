class Solution {
        int isReverse(int n){
        int ans=0,lastDigit=0;
         while(n){
         lastDigit = n%10;
         n /= 10;
         ans = ans * 10 + lastDigit;       
    }
    return ans;
    }
    bool isPalindrome(int x) {
        if(x<0)  return false;
        if(isReverse(x) == x)
            return true;
        else
            return false;
    }
}
