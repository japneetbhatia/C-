#include <iostream>
using namespace std;

void segs(int A[],int n);
void print(int A[],int n);
int main() {
	//code
	int t;
	cin>>t;
	while(t)
	{
	    int n, A[1000000];
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        cin>>A[i];
	    }
	    segs(A,n);
	    print(A,n);
	    t--;
	}
	return 0;
}
void segs(int A[],int n)
{
    int ctr0=0, ctr1=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==0)
        {
            ctr0++;
        }
        else if(A[i]==1)
        {
            ctr1++;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(i<ctr0)
        {
          A[i]=0; 
        }
        else if(ctr1)
        {
            A[i]=1;
            ctr1--;
        }
        else
        A[i]=2;
    }
    /*
    for(int i=ctr0;i<ctr1;i++)
    {
        A[i]=1;
    }
    
    for(int i=ctr1;i<n;i++)
    {
        A[i]=2;
    }*/
}

void print(int A[],int n)
{
 for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
