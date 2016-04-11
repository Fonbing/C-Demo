/*# include<stdio.h>
int main()
{
	int t=0,i,b=0,a[15];
	printf("把15只猴子编号为1~15\n");
	for(i=0;i<15;i++)
		a[i]=1;
	printf("淘汰的猴子依次为：\n");
    for(i=0;i<15;i++)
	{
		t+=a[i];
		if(t==7)
		{
			a[i]=0;
			t=0;
			b++;
			printf("%d、第%d只\n",b,i+1);
		}
		if(i==14)
			i=-1;
        if(b==14&&a[i]==1)
		{
			printf("最后第%d只猴子当大王\n",i+1);
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
	printf("请输入几个人围成圈报数:\n");
	scanf("%d",&n);
	a=(int *) malloc ( sizeof(int) * n );
	printf("把这%d个人编号为1~%d\n",n,n);
	for(i=0;i<n;i++)
		a[i]=1;
	printf("退出的人依次为：\n");
    for(i=0;i<n;i++)
	{
		t+=a[i];
		if(t==7)
		{
			a[i]=0;
			t=0;
			b++;
			printf("%d、第%d人\n",b,i+1);
		}
		if(i==n-1)
			i=-1;
        if(b==n-1&&a[i]==1)
		{
			printf("最后留下%d号\n",i+1);
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
    printf("请输入几个人围成圈报数:\n");
    scanf("%d",&n); 
    for(i=2;i<=n;i++) 
        s=(s+M)%i; 
    printf("最后留下%d号\n",s+1);
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
