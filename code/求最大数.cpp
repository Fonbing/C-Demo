#include<stdio.h>
int i;
void qzds(int a[],int n);
void main()
{
	int a[1000],n;
	printf("请输入要从几个数中找最大数：\n");
	scanf("%d",&n);
	printf("输入这%d个数:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	qzds(a,n);	
}
void qzds(int a[],int n)
{
	int j=0;
	for(i = 1;i < n;i++)
		if(a[j] < a[i])
			j = i;
		printf("这个数组的最大数为：%d,是第%d个数\n",a[j],j+1);
		return ;
}
