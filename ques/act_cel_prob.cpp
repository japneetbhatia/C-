#include<bits/stdc++.h> 
#include<time.h>

using namespace std;

void printMaxActivities(int s[], int f[], int n) 
{ 
	int i, j; 

	cout<<"\n\n Following activities are selected n : "<<i; 
	i = 0; 
	//printf("%d ", i); 
	for (j = 1; j < n; j++) 
	{ 
	if (s[j] >= f[i]) 
	{ 
        cout<<" "<<j;
		//printf ("%d ", j); 
		i = j; 
	} 
	} 
} 

int main() 
{ 
	int s[] = {1, 3, 0, 5, 8, 5}; 
	int f[] = {2, 4, 6, 7, 9, 9}; 
	int n = sizeof(s)/sizeof(s[0]); 
    clock_t start, end; 

  
    start = clock();
	
	printMaxActivities(s, f, n); 
     end = clock(); 
  
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    cout << "\n Time taken by program is : " << time_taken<<" sec " << endl; 

	return 0; 
} 
