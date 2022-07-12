# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <time.h>
# define N 4
void main()
{	int a[N][N],b[N];
	int i,j;
	srand( time( NULL ) );
	printf("矩阵：\n");
	for(i=0;i<N;i++)    //用随机函数生成N行N列的二维数组并按矩阵格式输出
	{	for(j=0;j<N;j++)
		{	a[i][j]=rand()%20;
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	for(j=0;j<N;j++) //外循环控制列下标
	{	b[j]=a[0][j]; //假设每列的0行元素是最大数
		for(i=1;i<N;i++)
			if(b[j]<a[i][j])
				b[j]=a[i][j];
	}
	printf("该矩阵每列元素的最大值是：\n");
	for(i=0;i<N;i++)
		printf("%4d",b[i]);
	printf("\n");
}