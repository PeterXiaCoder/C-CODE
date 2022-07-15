//while 循环语句
//# include <stdio.h>
//int main()
//{
//	int i=1;
//	while(i<=100)
//	{
//		printf("%d ",i);
//		i+=2;  /*i+=2 i加2的意思*/
//	}
//
	//while(i<=100)
	//{
	//	if(i%2!=0) /* != 不等于*/
	//		printf("%d ",i);
	//	    i++;
	//}

	//while(i<=100)
	//{
	//	if(i%2==1)  /*= 是赋值；== 等于*/
	//	printf("%d ",i);
	//	i++;
	//}
//	return 0;
//}

/*switch 语句，常用于多分支的情况。*/       

/* eg: 输入1，输出星期一；
       输入2，输出星期二；
	       3，        三
           4          四
	     .................*/
//代码一
//# include <stdio.h>  
//int main()
//{
//	int i=0;
//	scanf("%d",&i);  /*scanf函数：经过%d，将合理的字符转化为数字；&i称为“取地址i”，就相当于将数据存入以变量i的地址为地址的变量中*/
//	if(1==i)
//		printf("星期一");
//  else   if(2==i)
//	    printf("星期二");
//	else   if(3==i)
//	    printf("星期三");
//	else  if(4==i)
//		printf("星期四");
//	else  if(5==i)
//		printf("星期五");
//		return 0;
//}

//代码一与代码二等价

//代码二
//# include <stdio.h>
//int main()
//{
//	int i=0;
//	scanf("%d",&i);
//	switch(i)
//	{ case 1:   /*case 1 表示情况1*/
//	    printf("星期一\n");
//		break; /* break 用于跳出switch语句*/
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	}
//	return 0;
//}
