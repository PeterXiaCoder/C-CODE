# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <time.h>
void main()
{	int a[3][3];
	int i,j,n;
	srand( time( NULL ) );
	printf("ԭ����:\n");
	for(i=0;i<3;i++)   //�������������3��3�еĶ�ά���鲢�������ʽ���
	{ 	for(j=0;j<3;j++)
		{	a[i][j]=rand()%20;  // rand()%20 ����һ��20���ڵ�����	                          
		 	printf("%5d",a[i][j]);
		}
	  printf("\n");
	}
	printf("������n��");
	scanf("%d",&n);
	for(i=0;i<3;i++)      //i�������±�
		for(j=0;j<=i;j++)  //j��0��i����ÿ�еĶԽ��߼�ǰ����������±�
			a[i][j]=a[i][j]*n;
	printf("\n������������Ԫ�س��� %d ��ֵΪ:\n",n);
	for(i=0;i<3;i++)
	{	for(j=0;j<3;j++)
			printf("%5d",a[i][j]);
	 	printf("\n");
	}
}