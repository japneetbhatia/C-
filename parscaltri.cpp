
class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        // code here
        
        for(int line = 1; line <= n; line++ )
        {
            int c = 1;
            for(int i =1;i<=line;i++)
            {
                cout<<c<<" ";
                c = c * (line-i)/i;
            }
            cout<<"\n";
        }
    }
};
