#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char** agrc){
    //write your code here
    int n; cin>>n;
    vector<int> arr(n,0);
    for(int i = 0; i < n ; i++)  cin>>arr[i];
    cout<<arr[n/2]<<endl;
    return 0;
}
