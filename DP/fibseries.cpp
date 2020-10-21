#include<iostream>

using namespace std;

int main()
{
    int no;
    cin>>no;
    int fibn = fibmemo(no);
    cout<<fibn<<endl;
    return 0;
}

int fibmemo(int n)
{
    int qb[n+1];
    if( n==0 || n==1 )
    {
        return n;
    }

    if(qb[n] !=0 )
    {
        cout<<"Hello "<<n<<endl;
        int fib1 = fibmemo( n-1 );
        int fib2 = fibmemo( n-2 );
        int fibn = fib1 + fib2;

        qb[n] = fibn;
        return fibn;
    }
}

