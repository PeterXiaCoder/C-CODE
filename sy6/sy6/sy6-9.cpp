# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <time.h>
# define  N  3
void main()
{	int a[N][N],b[N][N];
	int i,j;
	srand( time( NULL ) );
	printf("矩阵A :\n");
	for(i=0;i<N;i++)   //用随机函数生成N行N列的二维数组并按矩阵格式输出
	{ 	for(j=0;j<N;j++)
		{	a[i][j]=rand()%10;  	                          
		 	printf("%5d",a[i][j]);
		}
	  	printf("\n");
	}
	printf("转置矩阵A' :\n");
	for(j=0;j<N;j++)   //按列序遍历矩阵A并按矩阵格式输出即是A的转置矩阵
	{ 	for(i=0;i<N;i++)
		 	printf("%5d",a[i][j]);
	  	printf("\n");
	}
	for(i=0 ; i < N ; i++)    // A、B按行序遍历，A'按列序遍历
	  	for(j=0 ;  j < N  ;  j++)  //因为方阵的行、列数相同，所以可以用一组循环完成运算
		    b[i][j] =  a[i][j]  +  a[j][i]  ;      
	printf("结果矩阵B（B=A+A'）:\n");
	for(i=0;i<N;i++)     
	{  for(j=0;j<N;j++) 
		  printf("%5d",b[i][j]);
		printf("\n");
	}
}