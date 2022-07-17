//分支语句
//	1.if
//	2.switch

//switch(整型表达式) /*一定跟得是整型表达式（int） float double！*/
//{
//	语句项；    语句项：一些case表达式（case 情况）；case+整型数字:（case 1:；case 2:）
//    break；     break 结束switch的命令语，与case搭配使用
//}

//eg:输出周一到周五工作日，周六周天休息日
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
//			printf("工作日\n");
//			break;  /*break 结束swicth的命令语，与case搭配使用*/
//		case 6:
//		case 7:
//			printf("休息日",i);
//			break;
//		default:
//			printf("输入错误\n");/*如果scanf输入的数字超出case的范围，就用default:来报错*/
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
//	case 1: m++;  /*执行完case 1:后没遇到break;会继续运行case 2：（遇break;跳出运行）*/
//	case 2: n++;
//	case 3:
//		switch(n) 
//		{  /*switch语句允许嵌套*/
//		case 1: n++;
//		case 2: n++;m++;  /*case 用;间隔*/
//			break; /*此break;跳出嵌套的switch，继续执行原有的switch*/
//		}
//	case 4: m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n",m,n);  /*printf 用,间隔*/
//	return 0;
//}                                                                                     
  /* An：m=5,n=3;*/

//循环语句
//    1.for
//	  2.while
//	  3.do while


	  