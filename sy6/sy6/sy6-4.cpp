#include<stdio.h>
void main()
{	int a[10][10],i,j,m;  //数组定义到足够大
	printf("Input m:");
	scanf("%d",&m);     
	for(i=0;i<m;i++)  
		for(j=0;j<m;j++)
		   a[i][j]=(i+1)*(j+1);  //元素值和下标的规律
	for(i=0;i<m;i++)   //输出结果矩阵
	{  for(j=0;j<m;j++)
	   	printf("%5d",a[i][j]);
	   printf("\n");
	}
}