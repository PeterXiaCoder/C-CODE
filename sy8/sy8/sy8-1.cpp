#include<stdio.h>
void main()
{
double sum(int x);
int n;
scanf("%d",&n);
printf("%lf",sum(n));
}
double sum(int x)
{
int i;
double y=0;
for(i=1;i<=x;i++)
if(i%5==0 || i%9==0)
y=y+1.0/i;
return(y);
}