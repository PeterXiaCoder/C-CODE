#include<stdio.h>
void fun(char ch1[100])
{
int i;
if(ch1[0]>='a' && ch1[0]<='z')
ch1[0]-=32;
for(i=0;ch1[i]!='\0';i++)
{
if(ch1[i+1]>='a' && ch1[i+1]<='z' && ch1[i]==' ')
ch1[i+1]-=32;
break;
}
}
void main()
{
char ch[100];
gets(ch);
fun(ch);
puts(ch);
}