//����1
//	if(condition)
//	{
//		return x;
//	}
//	return y;
//
// ����2 /*����1��2�ȼۣ������������x���������������y*/
//	 if(condition)
//	 {
//		 return x;
//	 }
//	 else
//	 {
//		 return y;
//	 }

//# include <stdio.h> 
//int main()
//{
//	int num = 4;
//	if ( 4 == num)  /*= �Ǹ�ֵ��== �ж����*/  /* 4 = numʱ�޷����У���ֹ����bug*/
//	{
//	printf("�Ǻ�\n");
//	}
//	return 0;
////}

//���1-100֮�������
# include <stdio.h>
int main()
{ 
	int i=1; /*i�Ǵ�1��ʼ��*/
	while(i<100)/*whileѭ��*/
	{
		if(i%2==1) /* % ģ��ȡ���������/ ��������� */
			printf("%d ",i);   /*\n �ǻ��е���˼,�������Ҫ���У����ü�*/ /* %d �����һ���ո��ܾ�����ӡ�ĸ�ʽ*/
	        i++; /*i++ iÿ���ۼ�1��ѭ��*/
	}
	return 0;
}
