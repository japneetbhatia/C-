#include <iostream>
using namespace std;

int spiralmat(int a[50][50],int r, int c);

int main() {
	//code
	int t,n,row,col,arr[50][50];
	cin>>t;
	while(t)
	{
	    cin>>row;
	    cin>>col;
	    for(int i =0;i<row;i++)
	    for(int j =0;j<col;j++)
	    {
	        cin>>arr[i][j];
	    }
	    spiralmat(arr,row,col);
	    t--;
	}
	return 0;
}

int spiralmat(int a[50][50],int r, int c)
{
  int i, j = 0, k = 0;
 
    while (j < r && k < c) {
        for (i = k; i < c; ++i) {
            cout << a[j][i] << " ";
        }
        j++;
 
        for (i = j; i < r; ++i) {
            cout << a[i][c - 1] << " ";
        }
        c--;
 
        if (j < r) {
            for (i = c - 1; i >= k; --i) {
                cout << a[r - 1][i] << " ";
            }
            r--;
        }
 
        
        if (k < c) {
            for (i = r - 1; i >= j; --i) {
                cout << a[i][k] << " ";
            }
            k++;
        }
    }
}
