# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <time.h>
# define  N  4
void main()
{	int a[N][N];
	int i,j,t;
	srand( time( NULL ) );
	printf("原矩阵:\n");
	for(i=0;i<N;i++)   //用随机函数生成N行N列的二维数组并按矩阵格式输出
	{ 	for(j=0;j<N;j++)
		{	a[i][j]=rand()%10;  	                          
		 	printf("%5d",a[i][j]);
		}
	  	printf("\n");
	}
	for(i=0 ; i < N ; i++)  //外循环控制行下标
	{  	for(j=0 ;  j < i  ;  j++)  //遍历左下半三角 (不含对角线) 元素
		{   t = a[i][j] ;         //与右上半三角对称元素交换
	   		a[i][j] = a[j][i] ; 
	   		a[j][i] = t ;      
		}
	}
	printf("转置矩阵是：\n");
	for(i=0;i<N;i++)     
	{  for(j=0;j<N;j++) 
		  printf("%5d",a[i][j]);
		printf("\n");
	}
}