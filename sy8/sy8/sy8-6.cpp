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
printf("������һ��4λ���ڵ�������:   ");
scanf("%d", &n);
}  
while(n<0 || n>9999);
place=fun(n);
printf("�����������%dλ\n", place);
}