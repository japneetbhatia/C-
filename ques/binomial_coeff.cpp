#include<bits/stdc++.h> 
#include<time.h>

using namespace std; 

int min(int a, int b); 

int binomialCoeff(int n, int k) 
{ 
	int C[n + 1][k + 1]; 
	int i, j; 
	for (i = 0; i <= n; i++) 
	{ 
		for (j = 0; j <= min(i, k); j++) 
		{ 
			// Base Cases 
			if (j == 0 || j == i) 
				C[i][j] = 1; 

		
			else
				C[i][j] = C[i - 1][j - 1] + 
						C[i - 1][j]; 
		} 
	} 

	return C[n][k]; 
} 


int min(int a, int b) 
{ 
	return (a < b) ? a : b; 
} 


int main() 
{ 
	int n = 10, k = 2; 
    clock_t start, end; 

  
    start = clock();
	cout << "\n\n Value of C[" << n << "]["
		<< k << "] is " << binomialCoeff(n, k); 
         end = clock(); 
  
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    cout << "\n Time taken by program is : " << time_taken<<" sec " << endl; 
} 
