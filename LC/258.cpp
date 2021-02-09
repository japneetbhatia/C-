class Solution {
public:
    int addDigits(int num) {
         return num == 0 ? 0 : 1 + (num - 1) % 9;
    }
};

// class Solution {
// public:
//     int findans(int n){
//         int r=0;
//         int ans = 0;
//         while(n){
//             r = n%10;
//             ans += r;
//             n /= 10;
//         }
//         return ans;
//     }
//     int addDigits(int num) {
//         int t = findans(num);
//         int ans =findans(t);
//         return ans>=0 ? ans : t;
//     }
// };
