//��һ�����������£��޷Ǿ����֣�˳��ѡ��ѭ����



# include <stdio.h>
int main()
{
 int age =60;
 if(age<18)
	 printf("δ����\n");
 else
	 { if(age>=18 && age<25) /* ��������˼���ֲ��й�ϵʱ����&&���м����ӣ��� 18<=age<25 ��Ϊ age>=18 && age<25��*/ 
      printf("����\n");
 else if(age>=25 && age<50)
	 printf("׳��\n");
 else if(age>=50&& age<90)
      printf("����\n");
 else 
	 printf("������\n"); 
 } /*���һ��else��������Ҫʱ����ʡ�ԡ�*/

 /*if(a>=18)
 printf("����\n");\\������ӡ�����������%d��%f�ȣ����ӡ�������ֺ�����һ����������֣���printf("����%d\n")����
 else if(a<18)
	 printf("δ����\n");*/
 return 0;
}