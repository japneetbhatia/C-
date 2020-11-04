
class Solution
{
public:
    int setBits(int N)
    {
        int count = 0;
        while(N)
        {
            count += N & 1;
            N >>= 1;
        }
        return count;
        // Write Your Code here
    }
};
