# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <time.h>
# define  N  4
void main()
{	int a[N][N];
	int i,j,t;
	srand( time( NULL ) );
	printf("ԭ����:\n");
	for(i=0;i<N;i++)   //�������������N��N�еĶ�ά���鲢�������ʽ���
	{ 	for(j=0;j<N;j++)
		{	a[i][j]=rand()%10;  	                          
		 	printf("%5d",a[i][j]);
		}
	  	printf("\n");
	}
	for(i=0 ; i < N ; i++)  //��ѭ���������±�
	{  	for(j=0 ;  j < i  ;  j++)  //�������°����� (�����Խ���) Ԫ��
		{   t = a[i][j] ;         //�����ϰ����ǶԳ�Ԫ�ؽ���
	   		a[i][j] = a[j][i] ; 
	   		a[j][i] = t ;      
		}
	}
	printf("ת�þ����ǣ�\n");
	for(i=0;i<N;i++)     
	{  for(j=0;j<N;j++) 
		  printf("%5d",a[i][j]);
		printf("\n");
	}
}