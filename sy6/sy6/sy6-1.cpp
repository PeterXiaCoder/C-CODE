# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <time.h>
void main()
{
	int a[3][3];
	int i,j,sum=0;
	srand( time( NULL ) );
	printf("����\n");
	for(i=0;i<3;i++)   //�������������3��3�еĶ�ά���鲢�������ʽ���
	{	for(j=0;j<3;j++)
		{	a[i][j]=rand()%20;
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
		sum=sum+a[i][i]+a[i][2-i];  
	printf("�þ�����������Խ���Ԫ��֮��Ϊ��%d\n",sum);
}