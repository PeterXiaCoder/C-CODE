# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <time.h>
# define M  3
# define N  4
void main()
{
	int a[M][N],b[ M*N ];
	int i,j,k=0;
	srand( time( NULL ) );
	printf("ԭ����:\n");
	for(i=0;i<M;i++)    //�������������M��N�еĶ�ά���鲢�������ʽ���
	{ 	for(j=0;j<N;j++)
		{	a[i][j]=rand()%50;  	                          
		 	printf("%5d",a[i][j]);
		}
	  printf("\n");
	}
	for(j=0;j<N;j++)      //�����������ά���飬��ѭ���������±�
		for(i=0;i<M;i++)  //��ѭ���������±�
			b [  k++  ]  =  a[i][j];
	printf("\n�þ����������һά����Ľ����:\n");
	for(i=0;i<M*N;i++)   //���b�����е�����Ԫ�ؼ��ǽ��
		printf("%4d",b[i]);
	 printf("\n\n");
}