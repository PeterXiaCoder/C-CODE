//# include <stdio.h>
//void test()
//{
//	 static int a =1;
//	a++;
//	printf("a=%d\n",a);
//}
//int main()
//{
//	int i=0;
//	while(i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//extern int add(int,int);//extern调用外部函数
//int main()
//{
//	int a=20;
//	int b=10;
//	int sum=add(a,b);
//	printf("sum=%d\n",sum);
//	return 0;
//}
//int add(int x,int y)
//  {
//	  int z= x+ y;
//       return z;
//  }


//# include <stdio.h>
//# define max 100//# define定义标识符常量
//int main()
//{
//	int a=max;
//	printf("a=%d\n",a);
//	return 0;
//}

//函数的方式实现
//int Max(int x,int y)
//{
//	if(x>y)
//	return x;
//	else return y;
//}
//# include<stdio.h>
//extern int Max(int ,int);
//	int main()
//{
//	int a =10;
//	int b=20;
//	int max=Max(a,b);
//	printf("max=%d\n",max);
//	return 0;
//}

//宏的方式实现（宏--带参数）
//# include<stdio.h>
//# define MAX(X,Y) (X>Y?X:Y)
//int main()
//{ 
//	int a=10;
//	int b=20;
//	int max=MAX(a,b);
//	printf("max=%d\n",max);
//	return 0;
//}

//# include <stdio.h>
// int main()
// {
//	 int a=4;
//	 int* p=&a;//类型：int*；指针变量：p
//	 printf("%p\n",p);
//	 //&a;--取地址
//	 /*printf("%p\n",&a);*/
//	 return 0;
// }          
//->00EFFA68:十六进制；可用计算器（程序员）换算成二进制 
 //->0101FE70