#include <iostream>
using namespace std;

int findladder(int a[],int no);

int main() {
	//code
	int t,n,arr[100000];
	cin>>t;
	while(t)
	{
	    cin>>n;
	    for(int i =0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    findladder(arr,n);
	    t--;
	}
	return 0;
}

int findladder(int a[],int no)
{
    for (int i = 0; i < no; i++) 
    { 
        int j; 
        for (j = i+1; j < no; j++) 
        { 
            if (a[i] < a[j]) 
                break; 
        }     
        if (j == no)
            cout << a[i]<<' ' ; 
    }
  cout<<"\n";
    return 0;
}
