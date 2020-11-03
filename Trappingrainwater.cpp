#include <iostream>
using namespace std;

void trapwater(int A[], int n);

int main() {
	//code
	int t,Ar[100000],size;
	cin>>t;
	while(t)
	{
	    cin>>size;
	    for(int i =0; i<size; i++)
	    {
	        cin>>Ar[i];
	    }
	    trapwater(Ar,size);
	    t--;
	}
	return 0;
}

void trapwater(int A[], int n)
{
    int res = 0,left,right;
    for(int i =1; i<n-1; i++)
    {
        left = A[i];
        for(int j =0; j<i; j++)
        {
            left =max(A[j],left);
        }
        
        right = A[i];
        for(int j =i+1; j<n; j++)
        {
            right =max(A[j],right);
        }
        
        res+= min(left,right) - A[i];
        
        
    }
    cout<<res<<endl;
}
