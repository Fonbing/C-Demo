# include<stdio.h>
int main()
{
	int a,w,q,b,s,g;
	
	char ch;
s:
	
	printf("������һ����������λ����������\n");
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
				printf("���Ǹ�һλ������λΪ%d����������Ϊ%d\n",a,a);
			else if(a<100)
				
				printf("���Ǹ���λ������λΪ%d��ʮλΪ%d����������Ϊ%d%d\n",g,s,g,s);
			
			else if(a<1000)
				
				printf("���Ǹ���λ������λΪ%d��ʮλΪ%d����λΪ%d����������Ϊ%d%d%d\n",g,s,b,g,s,b);
			
			else if(a<10000)
				
				printf("���Ǹ���λ������λΪ%d��ʮλΪ%d����λΪ%d��ǧλΪ%d����������Ϊ%d%d%d%d\n",g,s,b,q,g,s,b,q);
			
			else if(a<100000)
				
				printf("���Ǹ���λ������λΪ%d��ʮλΪ%d����λΪ%d��ǧλΪ%d����λΪ%d����������Ϊ%d%d%d%d%d\n",g,s,b,q,w,g,s,b,q,w);
			
		}
		
		else
		{
			printf("���볬����Χ������������:\n");goto t;
		}
		
		
	}	
	else
	{
	//	getchar();
		fflush(stdin);
		printf("������Ĳ������֣�����������");goto t;
	}
	printf("����������y�����������������ַ�\n");
	scanf(" %c",&ch);
	  if(ch=='y')
		 goto s;
			 
			 return 0;
}