# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <time.h>
# define M  3
# define N  4
void main()
{
	int a[M][N],b[ M*N ];
	int i,j,k=0;
	srand( time( NULL ) );
	printf("原矩阵:\n");
	for(i=0;i<M;i++)    //用随机函数生成M行N列的二维数组并按矩阵格式输出
	{ 	for(j=0;j<N;j++)
		{	a[i][j]=rand()%50;  	                          
		 	printf("%5d",a[i][j]);
		}
	  printf("\n");
	}
	for(j=0;j<N;j++)      //按列序遍历二维数组，外循环控制列下标
		for(i=0;i<M;i++)  //内循环控制行下标
			b [  k++  ]  =  a[i][j];
	printf("\n该矩阵按列序存入一维数组的结果是:\n");
	for(i=0;i<M*N;i++)   //输出b数组中的所有元素即是结果
		printf("%4d",b[i]);
	 printf("\n\n");
}