//��֧���
//	1.if
//	2.switch

//switch(���ͱ��ʽ) /*һ�����������ͱ��ʽ��int�� float double��*/
//{
//	����    ����һЩcase���ʽ��case �������case+��������:��case 1:��case 2:��
//    break��     break ����switch���������case����ʹ��
//}

//eg:�����һ�����幤���գ�����������Ϣ��
//# include <stdio.h>
//int main ()
//{
//	int i=0;
//	scanf("%d",&i);
//	switch(i)
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("������\n");
//			break;  /*break ����swicth���������case����ʹ��*/
//		case 6:
//		case 7:
//			printf("��Ϣ��",i);
//			break;
//		default:
//			printf("�������\n");/*���scanf��������ֳ���case�ķ�Χ������default:������*/
//	        break;
//	}
//	return 0;
//}

//# include <stdio.h>
//int main()
//{
//	int n=1;
//	int m=2;
//	switch(n)
//	{
//	case 1: m++;  /*ִ����case 1:��û����break;���������case 2������break;�������У�*/
//	case 2: n++;
//	case 3:
//		switch(n) 
//		{  /*switch�������Ƕ��*/
//		case 1: n++;
//		case 2: n++;m++;  /*case ��;���*/
//			break; /*��break;����Ƕ�׵�switch������ִ��ԭ�е�switch*/
//		}
//	case 4: m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n",m,n);  /*printf ��,���*/
//	return 0;
//}                                                                                     
  /* An��m=5,n=3;*/

//ѭ�����
//    1.for
//	  2.while
//	  3.do while


	  