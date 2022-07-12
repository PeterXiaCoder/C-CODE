#include<stdio.h>
#include<string.h>
void fun(char a[])
{
char k[100];
int i,j;
for(i=0,j=0;a[i]!='\0';i++)
if(a[i]>='0' && a[i]<='9')
{
k[j++]='$';
k[j++]=a[i];
}
else
k[j++]=a[i];
k[j]='\0';
strcpy(a,k);
}
void main()
{
char ch[100]={"A1B23CD45"};
fun(ch);
puts(ch);
}
