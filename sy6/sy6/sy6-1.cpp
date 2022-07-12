# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <time.h>
void main()
{
	int a[3][3];
	int i,j,sum=0;
	srand( time( NULL ) );
	printf("矩阵：\n");
	for(i=0;i<3;i++)   //用随机函数生成3行3列的二维数组并按矩阵格式输出
	{	for(j=0;j<3;j++)
		{	a[i][j]=rand()%20;
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
		sum=sum+a[i][i]+a[i][2-i];  
	printf("该矩阵的正、反对角线元素之和为：%d\n",sum);
}