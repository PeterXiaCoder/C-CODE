//while ѭ�����
//# include <stdio.h>
//int main()
//{
//	int i=1;
//	while(i<=100)
//	{
//		printf("%d ",i);
//		i+=2;  /*i+=2 i��2����˼*/
//	}
//
	//while(i<=100)
	//{
	//	if(i%2!=0) /* != ������*/
	//		printf("%d ",i);
	//	    i++;
	//}

	//while(i<=100)
	//{
	//	if(i%2==1)  /*= �Ǹ�ֵ��== ����*/
	//	printf("%d ",i);
	//	i++;
	//}
//	return 0;
//}

/*switch ��䣬�����ڶ��֧�������*/       

/* eg: ����1���������һ��
       ����2��������ڶ���
	       3��        ��
           4          ��
	     .................*/
//����һ
//# include <stdio.h>  
//int main()
//{
//	int i=0;
//	scanf("%d",&i);  /*scanf����������%d����������ַ�ת��Ϊ���֣�&i��Ϊ��ȡ��ַi�������൱�ڽ����ݴ����Ա���i�ĵ�ַΪ��ַ�ı�����*/
//	if(1==i)
//		printf("����һ");
//  else   if(2==i)
//	    printf("���ڶ�");
//	else   if(3==i)
//	    printf("������");
//	else  if(4==i)
//		printf("������");
//	else  if(5==i)
//		printf("������");
//		return 0;
//}

//����һ�������ȼ�

//�����
//# include <stdio.h>
//int main()
//{
//	int i=0;
//	scanf("%d",&i);
//	switch(i)
//	{ case 1:   /*case 1 ��ʾ���1*/
//	    printf("����һ\n");
//		break; /* break ��������switch���*/
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}
