#include<stdio.h>
int fun(int b[3][3])
{
int i,j,t;
for(i=0;i<3;i++)
for(j=0;j<i;j++)
{
t=b[i][j];
b[i][j]=b[j][i];
b[j][i]=t;
}
return b[i][j];
}
void main()
{
 int a[3][3];
 int i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
printf("%d ",a[i][j]);
} 
printf("\n");
}
fun(a);
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
}