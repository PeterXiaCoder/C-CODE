# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <time.h>
# define  N  3
void main()
{	int a[N][N],b[N][N];
	int i,j;
	srand( time( NULL ) );
	printf("����A :\n");
	for(i=0;i<N;i++)   //�������������N��N�еĶ�ά���鲢�������ʽ���
	{ 	for(j=0;j<N;j++)
		{	a[i][j]=rand()%10;  	                          
		 	printf("%5d",a[i][j]);
		}
	  	printf("\n");
	}
	printf("ת�þ���A' :\n");
	for(j=0;j<N;j++)   //�������������A���������ʽ�������A��ת�þ���
	{ 	for(i=0;i<N;i++)
		 	printf("%5d",a[i][j]);
	  	printf("\n");
	}
	for(i=0 ; i < N ; i++)    // A��B�����������A'���������
	  	for(j=0 ;  j < N  ;  j++)  //��Ϊ������С�������ͬ�����Կ�����һ��ѭ���������
		    b[i][j] =  a[i][j]  +  a[j][i]  ;      
	printf("�������B��B=A+A'��:\n");
	for(i=0;i<N;i++)     
	{  for(j=0;j<N;j++) 
		  printf("%5d",b[i][j]);
		printf("\n");
	}
}