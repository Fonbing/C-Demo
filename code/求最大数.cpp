#include<stdio.h>
int i;
void qzds(int a[],int n);
void main()
{
	int a[1000],n;
	printf("������Ҫ�Ӽ����������������\n");
	scanf("%d",&n);
	printf("������%d����:\n",n);
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
		printf("�������������Ϊ��%d,�ǵ�%d����\n",a[j],j+1);
		return ;
}
