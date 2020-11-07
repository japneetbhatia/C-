#include<iostream>
#include<time.h>

using namespace std;


int main()
{int a[2][2],b[2][2],c[2][2];
 int m1,m2,m3,m4,m5,m6,m7,i,j;
 //clrscr();
 //cout<<"Matrix Multiplication Strassrn's method by-Tarun Rawat\n";
 cout<<"\nEnter the elements of 2x2 Matrix 1:\n";
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   cin>>a[i][j];
  }
  
 }
 cout<<"Enter the elements of 2x2 Matrix 2:\n";
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   cin>>b[i][j];
  }
 }
 //clrscr();
 cout<<"\nFirst matrix is:\n";
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   cout<<a[i][j]<<"\t";
  }
  cout<<"\n";
 }
 cout<<"\nSecond matrix is\n";
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   cout<<b[i][j]<<"\t";
  }
  cout<<"\n";
 }

clock_t start, end; 

 m1= (a[0][0] + a[1][1])*(b[0][0]+b[1][1]);
 m2= (a[1][0]+a[1][1])*b[0][0];
 m3= a[0][0]*(b[0][1]-b[1][1]);
 m4= a[1][1]*(b[1][0]-b[0][0]);
 m5= (a[0][0]+a[0][1])*b[1][1];
 m6= (a[1][0]-a[0][0])*(b[0][0]+b[0][1]);
 m7= (a[0][1]-a[1][1])*(b[1][0]+b[1][1]);
 c[0][0]=m1+m4-m5+m7;
 c[0][1]=m3+m5;
 c[1][0]=m2+m4;
 c[1][1]=m1-m2+m3+m6;
 cout<<"\nProduct of both is:\n";
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   cout<<c[i][j]<<"\t";
  }
  cout<<"\n";
 }
   end = clock(); 
  
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
 //getch();
 return 0;
}
