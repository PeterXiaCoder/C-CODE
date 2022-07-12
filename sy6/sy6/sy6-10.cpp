# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <time.h>
# define  N  4
void main()
{	int a[N][N],i,j;
	double sum=0,ave;
	srand( time( NULL ) );
	printf("矩阵A :\n");
	for(i=0;i<N;i++)   //用随机函数生成N行N列的二维数组并按矩阵格式输出
	{ 	for(j=0;j<N;j++)
		{	a[i][j]=rand()%10;  	                          
		 	printf("%5d",a[i][j]);
		}
	  	printf("\n");
	}
	for( j=0 ; j < N ; j++)    // 累加首行和末行的元素值
	  	sum=sum + a[0][j] + a[N-1][j]; 
	for( i=1 ; i < N-1 ; i++)    // 累加第一列和最后一列除去首行和末行的元素值
	  	sum=sum + a[i][0] + a[i][N-1]; 
	ave = sum / ( 4*N - 4 ) ;
	printf("该矩阵周边元素的和是 %g  . \n",sum);
	printf("该矩阵周边元素的平均值是 %f  . \n",ave);
}
