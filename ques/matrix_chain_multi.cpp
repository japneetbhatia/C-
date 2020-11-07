#include <bits/stdc++.h> 
#include<time.h>

using namespace std; 

int MatrixChainOrder(int p[], int i, int j) 
{ 
	if (i == j) 
		return 0; 
	int k; 
	int min = INT_MAX; 
	int count; 

	for (k = i; k < j; k++) 
	{ 
		count = MatrixChainOrder(p, i, k) 
				+ MatrixChainOrder(p, k + 1, j) 
				+ p[i - 1] * p[k] * p[j]; 

		if (count < min) 
			min = count; 
	} 
 
	return min; 
} 
 
int main() 
{ 
	int arr[] = { 40, 20, 30, 10, 30 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
    clock_t start, end; 
	cout<<"\n\n Array:\t";
  for(int i =0; i<n;i++)
  {
	  cout<<arr[i]<<" ";
  }
    start = clock(); 
	cout << "\n Minimum number of multiplications is "
		<< MatrixChainOrder(arr, 1, n - 1); 
        end = clock(); 
  
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    cout << "\n Time taken by program is : " << time_taken<<" sec " << endl; 
    
} 

// This code is contributed by Shivi_Aggarwal
