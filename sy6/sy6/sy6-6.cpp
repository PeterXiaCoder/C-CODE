# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <time.h>
void main()
{	int a[3][3];
	int i,j,t;
	srand( time( NULL ) );
	printf("ԭ������a��ֵ:\n");
	for(i=0;i<3;i++)   //�������������3��3�еĶ�ά���鲢�������ʽ���
	{ 	for(j=0;j<3;j++)
		{	a[i][j]=rand()%20;  	                          
		 	printf("%5d",a[i][j]);
		}
	  	printf("\n");
	}
	for(i=0;i<3;i++)  //��ѭ���������±�
	{  t=a[i][2];      //ÿһ�е������Ԫ����t�ݴ�
	   for(j=1;j>=0;j--)  //�Ӹ��е����ڶ���Ԫ�ؿ�ʼ������Ұᶯһ��λ��
		   a[i][j+1]=a[i][j];
	   a[i][0]=t;     //���ݴ���t�е����һ��Ԫ��ֵ�����һ��Ԫ��
	}
	printf("����任��\n");
	for(i=0;i<3;i++)     
	{  for(j=0;j<3;j++) 
		  printf("%5d",a[i][j]);
		printf("\n");
	}
}