#include<stdio.h>
#define  M  3
#define  N  4
void fun(char  a[][N],char  b[])    
{
int i,j,k;
for(j=0;j<N;j++)
for(i=0;i<N;i++)
	
b[k++]=a[i][j];
b[k]='\0';  
 }
void  main()
{ char a[100],w[M][N]={{ 'W', 'W', 'W', 'W'},{'S', 'S', 'S', 'S'},{'H', 'H', 'H', 'H'}};
  int i,j;
  printf("The matrix:\n");
  for(i=0;i<M;i++)
  { 	for(j=0;j<N;j++) 
          printf("%3c",w[i][j]);
       printf("\n");
  }
  fun(w,a);
  printf("The A string:\n");
  puts(a);
  printf("\n\n");
}