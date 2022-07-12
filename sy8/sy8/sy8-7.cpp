#include<stdio.h>
#include<math.h>
double fun(int m)
{
double s,k=0;
int i;
for(i=1;i<=m;i++)
k+=log(i*1.0);
s=sqrt(k);
return s;
}
void main()
{
int n;
scanf("%d",&n);
fun(n);
printf("%f",fun(n));
}