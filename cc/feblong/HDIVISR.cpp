#include <iostream>
using namespace std;
int check(int n){
    for(int i=10; i >= 1; i--){
	    if(n%i==0){
	      return i;
	    }
	}
	return 0;
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	cout<<check(n);
	return 0;
}
