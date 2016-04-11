# include<stdio.h>
# include<time.h>
# include<stdlib.h>
int max_a(int *a,int s,int e);
int sum_a(int *a);
void asc(int *a);
void desc(int *a);
void main()
{
	srand((unsigned)time(0));
	int i,a[50],s,e,t=0;
	char ch;
	printf("分配的数组为：\n");
	for(i=0;i<50;i++)
	{
		a[i]=rand()%(101)+100;
		t++;
		printf("%d,",a[i]);
		if(t%10==0)
			printf("\b \n");
	}
    printf("请输入下标的范围(0~49)：\n");
	scanf("%d%d",&s,&e);
	printf("最大值为:%d，其下标为：%d\n",a[max_a(a,s,e)],max_a(a,s,e));
    printf("这50个数的和为：%d\n",sum_a(a));
	printf("输入a或d，a（降序），d（升序）\n");
	scanf(" %c",&ch);
	if(ch=='a')
	{
		asc(a);
		printf("降序排列为：\n");
		for(i=0;i<50;i++)
		{
			t++;
			printf("%d,",a[i]);
			if(t%10==0)
				printf("\b \n");
		}
		printf("\b");
	}
	if(ch=='d')
	{
		desc(a);
		printf("升序排列为：\n");
		for(i=0;i<50;i++)
		{
			t++;
			printf("%d,",a[i]);
			if(t%10==0)
				printf("\b \n");
		}
		
	}
}
int max_a(int *a,int s,int e)
{
	int i,j=0;
	for(i=s;i<=e;i++)
		if(a[j]<a[i])
			j=i;
		return j;
}
int sum_a(int *a)
{
	int i,sum=0;
	for(i=0;i<50;i++)
		sum+=a[i];
	return sum;
}
void asc(int *a)       //选择排序
{
	int t,j,i;
	for(i=0;i<49;i++)
		for(j=i+1;j<50;j++)
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
			
}
void desc(int *a)   //插入排序
{
	int t,i,j;
	for(i=1;i<50;i++)
	{
		t=a[i];
		for(j=i-1;j>=0;j--)
			if(a[j]>t)
				a[j+1]=a[j];
			else
				break;
		a[j+1]=t;
	}
}
