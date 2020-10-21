#include<iostream>

using namespace std;

int main()
{
    int low,high;
    cin>>low;
    cin>>high;
    for(int i = low; i<=high; i++)
    {
        int ctr=0;
        for(int c=2; c*c<=i;c++)
        {
            if(i%c==0)
            {
                ctr++;
                break;
            }
        }
        if(ctr == 0)
        {
            cout<<i<<endl;;
        }
    }
}
