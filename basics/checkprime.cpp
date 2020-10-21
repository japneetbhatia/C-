#include<iostream>

using namespace std;

int main()
{
    int t,n,c;
    cin>>t;
    for(int i=1; i <= t; i++ )
    {
        cin>>n;
        
         int ctr =0;
        for(c=2;c*c<=n;c++)
        {
            if(n%c==0)
            {
                ctr++;
                break;
            }
        }    
       
            if(ctr == 0)
            {
             cout<<"prime"<<endl;
            }
            else
            { 
                cout<<"not prime"<<endl;
            }
    
        
    }
    return 0;
}
