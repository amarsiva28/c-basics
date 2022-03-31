#include<stdio.h>
int main()
{
	int n,r,sum=0;
	scanf("%d",&n);//246
	while(n>0)//0>0
	{
		r=n%10;//r=2%10=2
		sum=sum+r;//sum=12
		n = n/10;//n=0
	}
	printf("%d", sum);
}
