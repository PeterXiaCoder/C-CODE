# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <time.h>
void main()
{	int a[3][3];
	int i,j,n;
	srand( time( NULL ) );
	printf("原矩阵:\n");
	for(i=0;i<3;i++)   //用随机函数生成3行3列的二维数组并按矩阵格式输出
	{ 	for(j=0;j<3;j++)
		{	a[i][j]=rand()%20;  // rand()%20 产生一个20以内的整数	                          
		 	printf("%5d",a[i][j]);
		}
	  printf("\n");
	}
	printf("请输入n：");
	scanf("%d",&n);
	for(i=0;i<3;i++)      //i控制行下标
		for(j=0;j<=i;j++)  //j从0到i，即每行的对角线及前面的数的列下标
			a[i][j]=a[i][j]*n;
	printf("\n矩阵左下三角元素乘以 %d 后值为:\n",n);
	for(i=0;i<3;i++)
	{	for(j=0;j<3;j++)
			printf("%5d",a[i][j]);
	 	printf("\n");
	}
}