#include<stdio.h>
void main()
{
double fun(int x);
int n;
scanf("%d",&n);
printf("%lf",fun(n));
}
double fun(int x)
{
int i,k=0;
double s=0;
for(i=1;i<=x;i++)
{
k+=i;
s+=1.0/k;
}
return(s);
}