#include<stdio.h>
void main()
{
double fun(double x);
double a;
scanf("%lf",&a);
printf("%lf",fun(a));
}
double fun(double x)
{
double c;
c=(int)(x*100+0.5);
return(c/100.0);
}