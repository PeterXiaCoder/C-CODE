# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <time.h>
# define  N  4
void main()
{	int a[N][N],i,j;
	double sum=0,ave;
	srand( time( NULL ) );
	printf("����A :\n");
	for(i=0;i<N;i++)   //�������������N��N�еĶ�ά���鲢�������ʽ���
	{ 	for(j=0;j<N;j++)
		{	a[i][j]=rand()%10;  	                          
		 	printf("%5d",a[i][j]);
		}
	  	printf("\n");
	}
	for( j=0 ; j < N ; j++)    // �ۼ����к�ĩ�е�Ԫ��ֵ
	  	sum=sum + a[0][j] + a[N-1][j]; 
	for( i=1 ; i < N-1 ; i++)    // �ۼӵ�һ�к����һ�г�ȥ���к�ĩ�е�Ԫ��ֵ
	  	sum=sum + a[i][0] + a[i][N-1]; 
	ave = sum / ( 4*N - 4 ) ;
	printf("�þ����ܱ�Ԫ�صĺ��� %g  . \n",sum);
	printf("�þ����ܱ�Ԫ�ص�ƽ��ֵ�� %f  . \n",ave);
}
