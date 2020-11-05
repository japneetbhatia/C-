
int equilibriumPoint(long long a[], int n) {
    int left,right,i,j;
    for(i =0 ; i< n ; i++)
    {
        left = 0;
        
        for(j = 0; j<i;j++)
        {
            left += a[j]; 
        }
        right = 0;
        for(j = i+1; j<n;j++)
        {
            right += a[j]; 
        }
        if(left == right)
        {
            return i+1;
             break;
        }
    }
    
    return -1;
    // Your code here
}
