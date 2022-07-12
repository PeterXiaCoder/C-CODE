#include <stdio.h>
#define N 80
int fun(char str[])
{   
int i,j;
for(j=0;str[j]='\0';j++);
for(i=0,j=j-1;i<j;i++,j--)
if(str[i]!=str[j])
return 0;
return 1;
 }
void  main( )
{	 char s[N];
	 int i;
	 printf("Enter a string : ");
	 gets(s);
	 printf("\n\n");
	 puts(s);
	 if( fun(s) )
		printf("YES\n");
	 else
		printf("NO\n"); 
}