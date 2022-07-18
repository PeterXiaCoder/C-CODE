//循环语句
//	1.whlie
//	2.for
//	3.do whlie

//# include <stdio.h>
//int main()
//{
//	if(1)   /*非0为真，故if语句成立，可打印hehe*/
//		printf("hehe\n");
//	return 0;
//}

//# include <stdio.h>
//int main()
//{
//	while(1)   /*非0为真，故whlie语句成立，可循环打印hehe*/
//		printf("hehe\n");
//	return 0;
//}

//eg:输出1到10（whlie循环）
//# include <stdio.h>
//int main()
//{
//	int i=1;
//	while(i<=10)
//	{
//	printf("%d ",i);  
//	i++;  /*依次累加1*/
//	}  /*while循环此两条语句，要用{}括起*/
//	return 0;
//}

//# include <stdio.h>
//int main()
//{
//	int i=1;
//	while(i<=10)
//	{
//		if(i==5)
//			continue;  /*在循环中遇到continue则后面的代码失效，又向前跳到while循环*/
//		printf("%d ",i);
//		i++;
//		
//		//if(i==5)
//		//	break;  /*break用于跳出while循环*/
//		//printf("%d ",i);
//		//i++;
//	}
//	return 0;
//}