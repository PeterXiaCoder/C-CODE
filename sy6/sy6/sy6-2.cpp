# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <time.h>
# define N 4
void main()
{	int a[N][N],b[N];
	int i,j;
	srand( time( NULL ) );
	printf("����\n");
	for(i=0;i<N;i++)    //�������������N��N�еĶ�ά���鲢�������ʽ���
	{	for(j=0;j<N;j++)
		{	a[i][j]=rand()%20;
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	for(j=0;j<N;j++) //��ѭ���������±�
	{	b[j]=a[0][j]; //����ÿ�е�0��Ԫ���������
		for(i=1;i<N;i++)
			if(b[j]<a[i][j])
				b[j]=a[i][j];
	}
	printf("�þ���ÿ��Ԫ�ص����ֵ�ǣ�\n");
	for(i=0;i<N;i++)
		printf("%4d",b[i]);
	printf("\n");
}