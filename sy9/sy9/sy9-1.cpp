#include<stdio.h>
#include<math.h>
void main()
{
double fun(double x[9], int n);
double a[9]={12,23,34,45,56,67,78,89,1};
fun(a,9); 
printf("%lf",fun(a,9));
}
double fun(double x[9], int n)
{
double s=0;
int i;
for(i=0;i<n-1;i++)
s+=sqrt((x[i]+x[i+1])/2);
return s;
}