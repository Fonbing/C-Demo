# include<stdio.h>
int main()
{
	int a,w,q,b,s,g;
	
	char ch;
s:
	
	printf("请输入一个不多于五位的正整数：\n");
t:
	if(scanf("%d",&a)==1)
	{
		w=a/10000;
		q=a%10000/1000;
		b=a%1000/100;
		s=a%100/10;
		g=a%10;
		if(a>0&&a<100000)
		{
			if(a<10)
				printf("这是个一位数，个位为%d，逆序排列为%d\n",a,a);
			else if(a<100)
				
				printf("这是个两位数，个位为%d，十位为%d，逆序排列为%d%d\n",g,s,g,s);
			
			else if(a<1000)
				
				printf("这是个三位数，个位为%d，十位为%d，百位为%d，逆序排列为%d%d%d\n",g,s,b,g,s,b);
			
			else if(a<10000)
				
				printf("这是个四位数，个位为%d，十位为%d，百位为%d，千位为%d，逆序排列为%d%d%d%d\n",g,s,b,q,g,s,b,q);
			
			else if(a<100000)
				
				printf("这是个五位数，个位为%d，十位为%d，百位为%d，千位为%d，万位为%d，逆序排列为%d%d%d%d%d\n",g,s,b,q,w,g,s,b,q,w);
			
		}
		
		else
		{
			printf("输入超过范围，请重新输入:\n");goto t;
		}
		
		
	}	
	else
	{
	//	getchar();
		fflush(stdin);
		printf("您输入的不是数字，请重新输入");goto t;
	}
	printf("继续请输入y，结束请输入任意字符\n");
	scanf(" %c",&ch);
	  if(ch=='y')
		 goto s;
			 
			 return 0;
}