#include<stdio.h>
void main()
{	int a[10][10],i,j,m;  //���鶨�嵽�㹻��
	printf("Input m:");
	scanf("%d",&m);     
	for(i=0;i<m;i++)  
		for(j=0;j<m;j++)
		   a[i][j]=(i+1)*(j+1);  //Ԫ��ֵ���±�Ĺ���
	for(i=0;i<m;i++)   //����������
	{  for(j=0;j<m;j++)
	   	printf("%5d",a[i][j]);
	   printf("\n");
	}
}