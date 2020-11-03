#include <iostream>
using namespace std;

int main() {
    
		int A[] = { 4, 6, 1, 5, 8,12,10,7,3,88 }; 
	int n = sizeof(A) / sizeof(A[0]); 
	int no = 77; 
	
	if(A[n-1]==no)
	{
	    cout<<"Found";
	}
	else
	{
	    int flag=0;
	int temp = A[n-1];
	A[n-1] == no;
	
	for(int i=0;i<n-1;i++)
	{
	    if(A[i]==no)
	    {
	        A[n-1]=temp;
	        flag =1;
	        
	        break;
	        
	    }
	}
	if(flag)
	{
	    cout<<"Found";
	}
	else
	{
	    cout<<"Not Found";
	}
	}
	return 0;
}
