/*package whatever //do not write package name here */

import java.util.*;

class GFG {
    public static Scanner scn = new Scanner(System.in);
    public static void input(int[] arr,int n){
        for(int i = 0; i < n; i++)
           arr[i] = scn.nextInt();
    }
    public static int operate(int[] arr){
        int l = arr.length;
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 0; i < l; i++){
            if(i>0 && i<l-1 )  sum1 += arr[i];
            else sum2 += arr[i];
        }
        return java.lang.Math.abs(sum1-sum2);
    }
	public static void main (String[] args) {
	    int n = scn.nextInt();
	    int[] arr = new int[n];
	    input(arr,n);
	    Arrays.sort(arr);
	    System.out.println(operate(arr));
	}
}
