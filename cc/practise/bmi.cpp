#include <iostream>
using namespace std;

int checkCat(int m,int h){
    int bmi = (m / (h*h));
    
    if(bmi <= 18)  return 1;
    if(bmi >= 19 && bmi <= 24)  return 2;
    if(bmi >= 25 && bmi <= 29)  return 3;
    if(bmi >= 30)  return 4;
}
int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int m,h;
	    cin>>m>>h;
	    cout<<checkCat(m,h)<<endl;;
	}
	return 0;
}
