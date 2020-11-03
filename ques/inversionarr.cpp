#include <iostream>
using namespace std;

void inversioncount(int arr[],int n);

int main() {
	//code
	int t;
	cin>>t;
	while(t)
	{
	    int N,C[1000000];
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	        cin>>C[i];
	    }
	    inversioncount(C,N);
	    t--;
	}
	return 0;
}

void inversioncount(int arr[],int n)
{
    int count = 0;
    for(int i=0;i<n-1;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                count++;
            }
        }
    }
    cout<<count;
}
