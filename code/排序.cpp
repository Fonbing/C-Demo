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
	printf("���������Ϊ��\n");
	for(i=0;i<50;i++)
	{
		a[i]=rand()%(101)+100;
		t++;
		printf("%d,",a[i]);
		if(t%10==0)
			printf("\b \n");
	}
    printf("�������±�ķ�Χ(0~49)��\n");
	scanf("%d%d",&s,&e);
	printf("���ֵΪ:%d�����±�Ϊ��%d\n",a[max_a(a,s,e)],max_a(a,s,e));
    printf("��50�����ĺ�Ϊ��%d\n",sum_a(a));
	printf("����a��d��a�����򣩣�d������\n");
	scanf(" %c",&ch);
	if(ch=='a')
	{
		asc(a);
		printf("��������Ϊ��\n");
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
		printf("��������Ϊ��\n");
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
void asc(int *a)       //ѡ������
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
void desc(int *a)   //��������
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
