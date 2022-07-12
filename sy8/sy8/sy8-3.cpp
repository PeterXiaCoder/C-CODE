#include<stdio.h>
void main()
{
int fun(int x,int y);
int a,b;
scanf("%d%d",&a,&b);
printf("%d",fun(a,b));
}
int fun(int x,int y)
{
int c;
c=x%10*1000+x/10*10+y/10+y%10*100;
return(c);
}