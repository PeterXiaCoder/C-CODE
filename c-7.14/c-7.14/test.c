//代码1
//	if(condition)
//	{
//		return x;
//	}
//	return y;
//
// 代码2 /*代码1，2等价；条件满足输出x，条件不满足输出y*/
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
//	if ( 4 == num)  /*= 是赋值；== 判断相等*/  /* 4 = num时无法运行，防止编译bug*/
//	{
//	printf("呵呵\n");
//	}
//	return 0;
////}

//输出1-100之间的奇数
# include <stdio.h>
int main()
{ 
	int i=1; /*i是从1开始的*/
	while(i<100)/*while循环*/
	{
		if(i%2==1) /* % 模，取余运算符；/ 除法运算符 */
			printf("%d ",i);   /*\n 是换行的意思,如果不需要换行，则不用加*/ /* %d 后面加一个空格，能决定打印的格式*/
	        i++; /*i++ i每次累加1的循环*/
	}
	return 0;
}
