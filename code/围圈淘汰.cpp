/*# include<stdio.h>
int main()
{
	int t=0,i,b=0,a[15];
	printf("��15ֻ���ӱ��Ϊ1~15\n");
	for(i=0;i<15;i++)
		a[i]=1;
	printf("��̭�ĺ�������Ϊ��\n");
    for(i=0;i<15;i++)
	{
		t+=a[i];
		if(t==7)
		{
			a[i]=0;
			t=0;
			b++;
			printf("%d����%dֻ\n",b,i+1);
		}
		if(i==14)
			i=-1;
        if(b==14&&a[i]==1)
		{
			printf("����%dֻ���ӵ�����\n",i+1);
			break;
		}
	}	
		return 0;
}

# include<stdio.h>
#include <stdlib.h>
int main()
{
	int t=0,i,b=0,*a,n;
	printf("�����뼸����Χ��Ȧ����:\n");
	scanf("%d",&n);
	a=(int *) malloc ( sizeof(int) * n );
	printf("����%d���˱��Ϊ1~%d\n",n,n);
	for(i=0;i<n;i++)
		a[i]=1;
	printf("�˳���������Ϊ��\n");
    for(i=0;i<n;i++)
	{
		t+=a[i];
		if(t==7)
		{
			a[i]=0;
			t=0;
			b++;
			printf("%d����%d��\n",b,i+1);
		}
		if(i==n-1)
			i=-1;
        if(b==n-1&&a[i]==1)
		{
			printf("�������%d��\n",i+1);
			break;
		}
	}	
	free(a);
	return 0;
	exit(1);
}

#include <stdio.h> 
#define M 3
int main() 
{ 
    int i,n,s=0; 
    printf("�����뼸����Χ��Ȧ����:\n");
    scanf("%d",&n); 
    for(i=2;i<=n;i++) 
        s=(s+M)%i; 
    printf("�������%d��\n",s+1);
    return 0; 
}*/
#include <stdio.h>
void main()
{
	int a[16],count=0,n=1,i;
	for(i=1;i<16;i++)
		a[i]=1;
	while(count!=14)
	{
		for(i=1;i<16;i++)
		{
			if(a[i]!=0)
			{
				if(n==7)
				{
					n=1;
					a[i]=0;
					count++;
				}
				else
					n++;
			}
		}
	}
	for(i=1;i<16;i++)
	{
		if(a[i]!=0)
			printf("%d\n",i);

	}
	
}
