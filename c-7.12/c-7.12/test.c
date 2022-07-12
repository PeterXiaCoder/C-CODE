//人一生中遇到的事，无非就三种；顺序、选择、循环。



# include <stdio.h>
int main()
{
 int age =60;
 if(age<18)
	 printf("未成年\n");
 else
	 { if(age>=18 && age<25) /* 当表达的意思出现并列关系时，用&&在中间连接；如 18<=age<25 改为 age>=18 && age<25。*/ 
      printf("青年\n");
 else if(age>=25 && age<50)
	 printf("壮年\n");
 else if(age>=50&& age<90)
      printf("老年\n");
 else 
	 printf("活神仙\n"); 
 } /*最后一个else，在无需要时，可省略。*/

 /*if(a>=18)
 printf("成年\n");\\若仅打印文字则无需加%d、%f等，因打印出的文字后会紧跟一串随机的数字，如printf("成年%d\n")错误！
 else if(a<18)
	 printf("未成年\n");*/
 return 0;
}