#include<stdio.h>
int fun(int n)
{
int k=0;
while(n>=1)
{
n=n/10;
k++;
}
return k;
}
void main()
{
int n,place ;
do
{
printf("请输入一个4位以内的正整数:   ");
scanf("%d", &n);
}  
while(n<0 || n>9999);
place=fun(n);
printf("输入的数字是%d位\n", place);
}