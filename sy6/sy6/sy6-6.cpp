# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <time.h>
void main()
{	int a[3][3];
	int i,j,t;
	srand( time( NULL ) );
	printf("原来数组a的值:\n");
	for(i=0;i<3;i++)   //用随机函数生成3行3列的二维数组并按矩阵格式输出
	{ 	for(j=0;j<3;j++)
		{	a[i][j]=rand()%20;  	                          
		 	printf("%5d",a[i][j]);
		}
	  	printf("\n");
	}
	for(i=0;i<3;i++)  //外循环控制行下标
	{  t=a[i][2];      //每一行的最后列元素用t暂存
	   for(j=1;j>=0;j--)  //从该行倒数第二个元素开始逐个往右搬动一个位置
		   a[i][j+1]=a[i][j];
	   a[i][0]=t;     //将暂存于t中的最后一个元素值存入第一个元素
	}
	printf("矩阵变换后：\n");
	for(i=0;i<3;i++)     
	{  for(j=0;j<3;j++) 
		  printf("%5d",a[i][j]);
		printf("\n");
	}
}