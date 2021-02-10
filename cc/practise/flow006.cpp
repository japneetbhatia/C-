#include <iostream>
using namespace std;
int sumOfDigit(int n){
    int lastDigit;
    int sum=0;
    while(n){
        lastDigit = n%10;
        sum += lastDigit;
        n /= 10;
    }
    return sum;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    cout<<sumOfDigit(n)<<endl;
	}
	return 0;
}
