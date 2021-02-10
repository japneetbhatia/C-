#include <iostream>
using namespace std;
int revNumber(int n){
    int lastDigit=0;
    int ans=0;
    while(n)
    {
        lastDigit=n%10;
        n /= 10;
        ans = ans*10+lastDigit;
    }
    return ans;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t){
	    int n;
	    cin>>n;
	    cout<<revNumber(n)<<endl;;
	    t--;
	}
	return 0;
}
