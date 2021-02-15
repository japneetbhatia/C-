#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int w[n];
        int l[n];
        for(int i=0;i<n;i++)
            cin>>w[i];
        for(int i=0;i<n;i++)
            cin>>l[i];
        if(n==2){
            if(w[0]==1 && w[1]==2) 
                cout<<"0\n";
            else 
            {
                if(l[0]==1)
                cout<<"2\n";
                else
                cout<<"1\n";
            }
        } else if(n==3){
            int a,b,c,a1,b1,c1,ans=0;
            for (int i = 0; i < n; i++)
            {
                if(w[i]==1){
                    a=i;
                    a1=i;
                }
                else if(w[i]==2){
                    b=i;
                    b1=i;
                }
                else if(w[i]==3){
                    c=i;
                    c1=i;
                }
            }
            while(c<=b || b<=a || c<=a){
                while(b<=a){
                    b+=l[b1];
                    ans++;
                }
                while(c<=b || c<=a) {
                    c+=l[c1];
                    ans++;
                }
            }
            cout<<ans<<"\n";
        } else if(n==4) {
            int a,b,c,d,a1,b1,c1,d1,ans=0;
            for (int i = 0; i < n; i++)
            {
                if(w[i]==1){
                    a=i;
                    a1=i;
                }
                else if(w[i]==2){
                    b=i;
                    b1=i;
                }
                else if(w[i]==3){
                    c=i;
                    c1=i;
                }
                else if(w[i]==4){
                    d=i;
                    d1=i;
                }
            }
            while(d<=a|| d<=b || d<=c||c<=b || b<=a || c<=a){
                while(b<=a){
                    b+=l[b1];
                    ans++;
                }
                while(c<=b || c<=a) {
                    c+=l[c1];
                    ans++;
                }
                while(d<=a|| d<=b || d<=c){
                    d+=l[d1];
                    ans++; 
                }
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}
// int input(vector<int>& arr, int n){
//     for(int i = 0; i < n; i++){
//         cin>>arr[i];
//     }
//     return 0;
// }
// int ouput(vector<int>& arr, int n){
//     for(int i = 0; i < n; i++){
//         cout<<arr[i];
//     }
//     return 0;
// }

// int getIndex(vector<int> v, int K)
// {
//     int ij = find(v.begin(), v.end());
//     if (ij != v.end()) 
//     {
//         int index = ij - v.begin();
//         return index;
//     }
//     else {
//         return -1;
//     }
// }
// void loop(int i,int a,int b){
//     vector<int> br;
//     for(int i = a; i<= b; i++){
//         int index = getIndex(a, br[i]);
//             int p = pos[getIndex(a, br[i-1])];
//             int c = index;

//             while(c<= p)
//             {
//                 c += l[index];
//                 pos[index] = c;
//                 count ++;
//             }
//     }
// }
// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    long long n;
// 	    cin>>n;
// 	    vector<int> arr(n,0);
// 	    input(arr,n);
// 	    vector<int> position(n,0);
// 	    loop(i,0,n-1);
// 	    pos[i] = i;
// 	    vector<int> l(n,0);
// 	    input(l,n);
// 	    vector<int> b(n,0); 
// 	    loop(i, 0, n-1); 
// 	    b[i] = a[i];
//         sort(b.begin(), b.end());
//         loop(j, 1, n-1);
//         // {
//         //     int index = getIndex(a, b[j]);
//         //     int p = pos[getIndex(a, b[j-1])];
//         //     int c = index;

//         //     while(c<= p)
//         //     {
//         //         c += l[index];
//         //         pos[index] = c;
//         //         count ++;
//         //     }
//         // }
//         cout<<count<<endl;
// 	}
// 	return 0;
// }
