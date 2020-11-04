
class Solution
{
	public:
		int binary_to_decimal(string str)
		{
		    // Code here.
		    int temp = std::stoi(str);
		    int decval = 0;
		    int base = 1;
		    while(temp)
		    {
		        int rev = temp%10;
		        temp = temp/10;
		        decval += rev*base;
		        base = base * 2;
		    }
		    return decval;
		}
};
