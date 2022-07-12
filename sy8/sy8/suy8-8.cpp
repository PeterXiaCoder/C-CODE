#include <stdio.h>
#include <math.h>
double  fun ( double  eps)
{ 
double s=0,t=1;
int i=1;
while(t>=eps)
{
s=s+t;
t=t*i/(2*i+1);
i++;
}
return 2*s;
}
void  main( )
{  double  x;
  printf("Input eps:") ;
  scanf("%lf",&x); 
  printf("\neps = %lf, PI=%lf\n", x, fun(x) );
}